#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int* targetIndices(int* nums, int numsSize, int target, int* returnSize){
for(int i=0;i<numsSize;i++)
{
    for(int j=i+1;j<numsSize;j++)
    {
        if(nums[i]>nums[j])
        {
            int temp=nums[j];
            nums[j]=nums[i];
            nums[i]=temp;
        }
    }
    
}


int* ans=malloc(sizeof(int)*(numsSize));

int index=0;
for(int i=0;i<numsSize;i++)
{
    if(nums[i]==target)
    {
        returnSize[0]++;
        ans[index++]=i;
    }
    
}

returnSize[0]=index;

return ans;
}