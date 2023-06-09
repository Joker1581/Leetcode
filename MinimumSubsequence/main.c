#include <stdio.h>
#include <stdlib.h>
int cmp(const void *x, const void *y){
    return *(const int *)x - *(const int *)y;
}

int* minSubsequence(int* nums, int numsSize, int* returnSize){
    int s = 0, z = numsSize, l = z, *a = malloc(sizeof(int [z])), i = 0;
    while (z-- && (s += nums[z]));
    qsort(nums, numsSize, sizeof(int), cmp);
    for (int n = 0 ; l-- && n <= s ; s -= a[i++] = nums[l], n += nums[l]);
    return *returnSize = i, a;
}