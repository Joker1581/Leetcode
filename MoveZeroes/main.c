#include <stdio.h>
#include <stdlib.h>
void swap(int* x,int* y)

{

int temp;

temp = *x;

*x = *y;

*y = temp;

}
void moveZeroes(int* nums, int numsSize){
    for (int i = 0, j = 0; i < numsSize; ++i)
    {
        /* code */
        if(nums[i])
            swap(nums[i], nums[j++]);
    }
    
}