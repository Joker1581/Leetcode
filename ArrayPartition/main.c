#include <stdio.h>
#include <stdlib.h>
int cmp(const void* a,const void* b){
    return (*(int*)a - *(int*)b);
}

int arrayPairSum(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), cmp);
    int count = 0;
    for(int i; i<numsSize;i+=2)
        count+=nums[i];
    return count;
}