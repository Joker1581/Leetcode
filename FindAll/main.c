#include <stdio.h>
#include <stdlib.h>
int abs(int a)
{
    if (a >= 0)
    {
        /* code */return a;
    }else
    {
        return -a;
    }
    
}
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize){
    int* res = malloc(sizeof(int)*numsSize);
    for (int i = 0; i < numsSize; i++)
    {
        /* code */
        if (nums[abs(nums[i]) - 1] > 0)
        {
            /* code */nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];
        }
        
    }
    int j = 0;
    for (int i = 0; i < numsSize; i++)
    {
        /* code */
        if (nums[i] > 0)
        {
            /* code */
            res[j++] = i + 1;
        }
        
    }
    *returnSize = j;
    return res;
}