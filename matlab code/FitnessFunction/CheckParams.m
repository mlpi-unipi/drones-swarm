function valid = CheckParams(scenarioName,params)
%%The parameters must be valid before launch the fitness function. This
%%function does this. To be completed
   valid = 1;
    if params.radiusSeparate > params.radiusAlign
        valid = 0;
        return;
    end
    
    if params.radiusSeparate > params.radiusCohere
        valid = 0;
        return;
    end

    if params.radiusAlign > params.radiusCohere
        valid = 0;
        return;
    end  
    
   if params.radiusDown < params.radiusTop
        valid = 0;
        return;    
    end
end