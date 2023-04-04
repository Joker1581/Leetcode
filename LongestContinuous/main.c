#include <stdio.h>
#include <stdlib.h>
#define max(a,b) (((a) > (b)) ? (a) : (b))
int findLengthOfLCIS(int* nums, int numsSize){
    if (numsSize <= 1) return numsSize;
    int count = 1, r = 0, maxn = 1;
    for ( r = 0; r < numsSize - 1; r++)
    {
        /* code */
        if (nums[r+1] > nums[r])
        {
            /* code */
            count ++;
            maxn = max(count, maxn);
            
        }else
        {
            count = 1;
        }
    }
    return maxn;
}