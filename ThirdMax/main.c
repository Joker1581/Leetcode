#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int thirdMax(int* nums, int numsSize){
    
    int max_1 = nums[0];
    long max_2 = LONG_MIN;
    long max_3 = LONG_MIN;
    
    for (int i = 1; i < numsSize; i++){
        if (nums[i] > max_1){
            max_3 = max_2;
            max_2 = max_1;
            max_1 = nums[i];
        } else if (nums[i] > max_2 && nums[i] < max_1){
            max_3 = max_2;
            max_2 = nums[i];
        } else if (nums[i] > max_3 && nums[i] < max_2){
            max_3 = nums[i];
        }
    }
    return (max_3 == LONG_MIN) ? max_1 : max_3;
}