#include <stdio.h>
#include <stdlib.h>
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){
    
    int *answer = (int *)malloc(sizeof(int) * numsSize); 
    int i = 0, j = 0;
    
    *returnSize = numsSize;
    
    for(i=0; i<numsSize; i++) {
        answer[i] = 0;
    }
       

    for(i=0; i<numsSize; i++) {
        for(j=i+1; j<numsSize; j++) {
            if(nums[i] > nums[j]) {
                answer[i]++;
            }
            else if(nums[i] < nums[j]) {
                answer[j]++;
            }
        }
    }   
    
    return answer;
}