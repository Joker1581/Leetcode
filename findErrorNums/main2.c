#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int* findErrorNums(int* nums, int numsSize, int* returnSize)
{
        *returnSize=2;
        int *a=malloc(sizeof(int)*(*returnSize));
        int count[10000]={0},i;
        for(i=0;i<numsSize;i++)
                count[nums[i]-1]++;
        for(i=0;i<numsSize;i++)
        {
                if(count[i]==2)
                        a[0]=i+1;
                if(count[i]==0)
                        a[1]=i+1;
        }
        return a;
}