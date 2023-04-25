#include <stdio.h>
#include <stdlib.h>
#define min(a,b) (((a) < (b)) ? (a) : (b))
int cmp (const void* a, const void* b){
    return *(int*)a - *(int*)b;
}
int largestSumAfterKNegations(int* nums, int numsSize, int k){
    qsort(nums, numsSize, sizeof(int), cmp);
    for (int i = 0; k>0 && i < numsSize && nums[i]<0; i++,k--)
    {
        /* code */
        nums[i] = -nums[i];
    }
    int res = 0, m1 = nums[0];
    for (int i = 0; i < numsSize; i++)
    {
        /* code */
        res += nums[i];
        m1 = min(m1, nums[i]);
    }
    return res - (k%2)*m1*2;
}