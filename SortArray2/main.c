#include <stdio.h>
#include <stdlib.h>
int* sortArrayByParity(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int* res = (int*)calloc(*returnSize, sizeof(int));
    int i = 0, j = 0, k;
    if (numsSize%2 == 0) {
        k = numsSize - 1;
    }else{
        k = numsSize - 2;
    }
    for (; i < numsSize; i++)
    {
        /* code */
        if (nums[i] % 2 == 1)
        {
            /* code */
            res[k] = nums[i];
            k -= 2;
        }else{
            res[j] = nums[i];
            j += 2;
        }
        
    }
    return res;
}