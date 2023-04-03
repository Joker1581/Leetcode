#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int cmp(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}
int maximumProduct(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), cmp);
    if (nums[0]* nums[numsSize-1]>= 0)
    {
        /* code */
        return nums[numsSize-1]*nums[numsSize-2]*nums[numsSize-3];
    }
    int l = 0;
    int r = numsSize - 1;
    long res = 1;
    int count = 3;
    while (count > 0)
    {
        /* code */
        if (count % 2 == 1)
        {
            /* code */
            res *= nums[r--];
        }else
        {
            if (nums[r]*nums[r-1] > nums[l]*nums[l+1])
            {
                /* code */
                res *= nums[r--] * nums[r--];
            }else
            {
                res *= nums[l++] * nums[l++];
            }
            count --;
        }
        count --;
        
    }
    return res;
}