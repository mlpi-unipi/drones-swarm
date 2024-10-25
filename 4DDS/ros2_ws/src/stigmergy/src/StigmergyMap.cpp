#include "stigmergy/StigmergyMap.hpp"

StigmergyMap::StigmergyMap() : Node("stigmergy_map"), pheromoneMap(HEIGHT, WIDTH)
{
    initialize();
}

void StigmergyMap::initialize()
{
    rclcpp::QoS qos_profile(rclcpp::KeepLast(10));
    qos_profile.best_effort();   // Usa QoS best effort

    // Inizializza i publisher per ogni drone nel swarm
    for (int i = 0; i < SWARM_SIZE; i++)
    {
        const std::string topic = "/px4_" + std::to_string(i + 1) + "/stigmergy/in/pheromone_gradient";
        gradientPublishers[i] = this->create_publisher<stigmergy::msg::PheromoneGradient>(topic, qos_profile);
    }

    // Subscriber per il rilascio del feromone
    releasePheromoneSubscription = this->create_subscription<stigmergy::msg::PheromoneRelease>(
        "/stigmergy_map/release_pheromone",
        qos_profile,
        std::bind(&StigmergyMap::releasePheromoneCallback, this, std::placeholders::_1)
    );

    // Subscriber per la richiesta del gradiente
    requestGradientSubscription = this->create_subscription<geometry_msgs::msg::Point>(
        "/stigmergy_map/request_gradient",
        qos_profile,
        std::bind(&StigmergyMap::gradientRequestCallback, this, std::placeholders::_1)
    );

    // Inizializza la mappa dei feromoni a zero
    pheromoneMap.setZero();

    // Inizializza il timer per l'evaporazione dei feromoni
    evaporationTimer = this->create_wall_timer(
        EVAPORATION_INTERVAL,
        std::bind(&StigmergyMap::evaporatePheromones, this)
    );
}
// Callback per il rilascio del feromone
void StigmergyMap::releasePheromoneCallback(const stigmergy::msg::PheromoneRelease::SharedPtr msg)
{
    auto index = latLonToIndex(msg->x, msg->y);
    if (index.first >= 0 && index.first < HEIGHT && index.second >= 0 && index.second < WIDTH)
    {
        releasePheromoneAt(index.first, index.second, msg->intensity); // Rilascio del feromone con diffusione
        RCLCPP_INFO(this->get_logger(), "Pheromone released at (%d, %d) with intensity %.2f", index.first, index.second, msg->intensity);
    }
}
// Rilascio del feromone con diffusione
void StigmergyMap::releasePheromoneAt(int row, int col, float amount)
{
    // Aggiungi il feromone alla cella centrale
    pheromoneMap(row, col) += amount;

    // Diffondi il feromone nelle celle adiacenti
    for (int dx = -1; dx <= 1; dx++)
    {
        for (int dy = -1; dy <= 1; dy++)
        {
            if (dx == 0 && dy == 0) continue;  // Salta la cella centrale
            int nx = row + dx;
            int ny = col + dy;
            if (nx >= 0 && nx < HEIGHT && ny >= 0 && ny < WIDTH)
            {
                pheromoneMap(nx, ny) += amount * DIFFUSION_RATE;
            }
        }
    }
}

void StigmergyMap::evaporatePheromones()
{
    pheromoneMap *= EVAPORATION_RATE;  // Applica l'evaporazione
    RCLCPP_INFO(this->get_logger(), "Pheromones evaporated");
}

void StigmergyMap::gradientRequestCallback(const geometry_msgs::msg::Point::SharedPtr msg)
{
    int vehicle_id = static_cast<int>(msg->z);  // Usa il campo z per l'ID del veicolo
    auto index = latLonToIndex(msg->x, msg->y);

    Eigen::Vector2f gradient(0.0f, 0.0f);

    // Calcola il gradiente se l'indice è valido
    if (index.first > 0 && index.first < HEIGHT - 1 && index.second > 0 && index.second < WIDTH - 1)
    {
        float dx = (pheromoneMap(index.first, index.second + 1) - pheromoneMap(index.first, index.second - 1)) / (2 * GRID_RESOLUTION);
        float dy = (pheromoneMap(index.first + 1, index.second) - pheromoneMap(index.first - 1, index.second)) / (2 * GRID_RESOLUTION);
        gradient = Eigen::Vector2f(dx, dy);
    }

    sendGradient(vehicle_id, gradient);
}

void StigmergyMap::sendGradient(const int vehicle_id, const Eigen::Vector2f& gradient)
{
    if (vehicle_id > 0 && vehicle_id <= SWARM_SIZE)
    {
        stigmergy::msg::PheromoneGradient msg;
        msg.dx = gradient.x();
        msg.dy = gradient.y();
        gradientPublishers[vehicle_id - 1]->publish(msg);
        RCLCPP_INFO(this->get_logger(), "Sent gradient to vehicle %d: dx=%.2f, dy=%.2f", vehicle_id, msg.dx, msg.dy);
    }
}

std::pair<int, int> StigmergyMap::latLonToIndex(double latitude, double longitude)
{
    int row = static_cast<int>((latitude - CENTRAL_LATITUDE) / GRID_RESOLUTION + (HEIGHT / 2));
    int col = static_cast<int>((longitude - CENTRAL_LONGITUDE) / GRID_RESOLUTION + (WIDTH / 2));

    // Verifica che gli indici siano all'interno dei limiti
    if (row < 0 || row >= HEIGHT || col < 0 || col >= WIDTH)
    {
        RCLCPP_WARN(this->get_logger(), "Coordinates out of bounds");
        return std::make_pair(-1, -1);
    }

    return std::make_pair(row, col);
}
