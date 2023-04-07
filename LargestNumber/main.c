#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// int cmp(const void* a, const void* b)
// {
//     return *(int*)b - *(int*)a;
// }
// int dominantIndex(int* nums, int numsSize){
//     qsort(nums, numsSize, sizeof(int), cmp);
//     if (nums[0] >= nums[1]*2) return nums[0];
//     return -1;
// }

int dominantIndex(int* nums, int numsSize){
    int max = -1, index = -1, second = -1;
    for (int i = 0; i < numsSize; i++)
    {
        /* code */
        if (nums[i] > max)
        {
            /* code */
            second = max;
            max = nums[i];
            index = i;
        }else if (nums[i] > second) second = nums[i];
        
    }
    return second*2 <= max ? index : -1;
}