#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define min(a,b) (((a) < (b)) ? (a) : (b))
// int minCost(int* cost, int costSize)
// {
//     if (costSize < 0) return 0;
//     if (costSize == 0 || costSize == 1) return cost[costSize];
//     return cost[costSize] + min(minCost(cost, costSize - 1), minCost(cost, costSize - 2));
// }
// int minCostClimbingStairs(int* cost, int costSize){
//     return min(minCost(cost, costSize - 1), minCost(cost, costSize - 2));
// }

int minCostClimbingStairs(int* cost, int costSize)
{
    int first = cost[0], second = cost[1];
    if (costSize <= 2) return min(first, second);
    for (int i = 2; i < costSize; i++)
    {
        /* code */
        int curr = cost[i] + min(first, second);
        first = second;
        second = curr;
    }
    return min(first, second);
}