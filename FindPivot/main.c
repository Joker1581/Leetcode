#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int pivotIndex(int* nums, int numsSize){
    int totalsum = 0, leftsum = 0;
    for (int  i = 0; i < numsSize; i++)
    {
        /* code */
        totalsum += nums[i];
    }
    for (int i = 0; i < numsSize; leftsum += nums[i++])
    {
        /* code */
        if (leftsum * 2 == totalsum - nums[i]) return i;

    }
    return -1;
    
    
}