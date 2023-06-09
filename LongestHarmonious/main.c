#include <stdio.h>
#include <stdlib.h>
int cmp(const void * a, const void * b)
{
    return *(int *)a - *(int *)b;
}
int findLHS(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), cmp);
    int max = 0, count = 1, temp = nums[0], preCount = 0;
    for(int i=1; i<numsSize; i++)
    {
        if(nums[i] == temp) count++;
        else 
        {
            if(preCount != 0 && max < preCount + count) max = preCount + count; 
            if(nums[i] - nums[i-1] == 1) preCount = count;
            else preCount = 0;
            temp = nums[i];
            count = 1;
        }
    }
    if(preCount != 0 && max < preCount + count) max = preCount + count; 
    return max;
}