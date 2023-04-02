#include <stdio.h>
#include <stdlib.h>
int findMaxConsecutiveOnes(int* nums, int numsSize){
    int c = 0, p = 0;
    while (numsSize--)
        *nums++ ? c++ : (p < c ? p = c : 0, c = 0);
    return p < c ? c : p;
}