#include <stdio.h>
int majorityElement(int* nums, int numsSize){
    int maj = 0;
    int c = 0;
    for (int i = 0; i < numsSize; i ++)
    {
        if (c)
        {
            c += (nums[i] == maj ? 1 : -1);
        }else
        {
            maj = nums[i];
            c = 1;
        }
    }
    return maj;
}