#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* sortedSquares(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int* res = (int*)calloc(numsSize, sizeof(int));
    int i = 0, j = numsSize - 1;
    for (int p = numsSize-1; p>=0; p--)
    {
        /* code */
        if (abs(nums[i]) > abs(nums[j]))
        {
            /* code */
            res[p] = nums[i]*nums[i];
            i++;
        }else{
            res[p] = nums[j]*nums[j];
            j--;
        }
        
        
    }
    
    return res;
}