#include <stdio.h>
#include <stdlib.h>
int cmp (const void* a, const void* b){
    return *(int*)b - *(int*)a;
}
int largestPerimeter(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), cmp);
    for (int i = 0; i < numsSize - 2; i++)
    {
        /* code */
        if (nums[i+1] + nums[i+2] > nums[i])
        {
            /* code */
            return nums[i] + nums[i+1] + nums[i+2];
        }
        
    }
    return 0;
}