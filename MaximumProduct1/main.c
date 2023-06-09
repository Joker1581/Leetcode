#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int maxProduct(int* nums, int numsSize){
    if(numsSize == 2) return (nums[0] - 1) * (nums[1] - 1);
    int max = nums[1] > nums[0] ? nums[1] : nums[0];
    int min = nums[1] > nums[0] ? nums[0] : nums[1];
    for(int i = 2; i < numsSize; i++) {
        if(nums[i] > max) {
            min = max;
            max = nums[i];
        }
        
        else if(nums[i] <= max && nums[i] > min) {
            min = nums[i];
        }
    }
    
    return (max - 1) * (min - 1);
}