#include <stdio.h>
#include <stdlib.h>

int missingNumber(int* nums, int numsSize){
    int sum = 0;
    int t1 = numsSize*(numsSize + 1)/2;
    for (int i = 0; i < numsSize; i++)
    {
        /* code */
        sum += nums[i];
    }
    return t1 - sum;
    
}