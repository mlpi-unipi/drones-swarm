// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stigmergy:msg/PheromoneGradient.idl
// generated code does not contain a copyright notice

#ifndef STIGMERGY__MSG__DETAIL__PHEROMONE_GRADIENT__STRUCT_H_
#define STIGMERGY__MSG__DETAIL__PHEROMONE_GRADIENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PheromoneGradient in the package stigmergy.
/**
  * gradient components of pheromone in NE format
 */
typedef struct stigmergy__msg__PheromoneGradient
{
  float dx;
  float dy;
} stigmergy__msg__PheromoneGradient;

// Struct for a sequence of stigmergy__msg__PheromoneGradient.
typedef struct stigmergy__msg__PheromoneGradient__Sequence
{
  stigmergy__msg__PheromoneGradient * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stigmergy__msg__PheromoneGradient__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STIGMERGY__MSG__DETAIL__PHEROMONE_GRADIENT__STRUCT_H_
