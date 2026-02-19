int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize) {
    int totalgas=0,totalcost=0;
    int start=0;
    int tank=0;

    for(int i=0;i<gasSize;i++){
        totalgas +=gas[i];
        totalcost += cost[i];
    }
    if(totalgas < totalcost){
          return -1;

    }
      
    for(int i=0;i<gasSize;i++){
        tank += gas[i]-cost[i];

        if(tank<0){
            start = i+1;
            tank=0;
        }
    }
    return start;

} 

    