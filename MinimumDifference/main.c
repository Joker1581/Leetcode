#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int cmpfunc(const void* a, const void* b){
    return *(int*)b - *(int*)a;
}

int minimumDifference(int* nums, int numsSize, int k){
    if(k == 1)
        return 0;
    qsort(nums, numsSize, sizeof(int), cmpfunc);
    int min = INT_MAX;
    for(int i = 0; i <= numsSize - k; i++){
        min = fmin(min, nums[i] - nums[i+k-1]);
    }
    return min;
}