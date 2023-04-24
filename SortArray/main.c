#include <stdio.h>
#include <stdlib.h>
int* sortArrayByParity(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int* res = (int*)calloc(*returnSize, sizeof(int));
    int i = 0, j = 0, k = numsSize - 1;
    for (; i < numsSize; i++)
    {
        /* code */
        if (nums[i] % 2 == 1)
        {
            /* code */
            res[k--] = nums[i];
        }else{
            res[j++] = nums[i];
        }
        
    }
    return res;
}