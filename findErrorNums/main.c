#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int accumulate (int begin, int end, int* nums)
{
    int res = 0;
    for (int i = begin; i < end; i++)
    {
        /* code */
        res += nums[i];
    }
    return res;
}
int cmp(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}
int set(int* nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), cmp);
    if(numsSize == 0)
    {
        return 0;   
    }
    // 定义三个序号
    int Start = 0;
    int End = 1;
    int Dst = 0;
    while(End<numsSize)
    {
        // Start End 所指向的数据不等时值覆盖
        if(nums[Start]!=nums[End])
         {
            nums[Dst]=nums[Start];
            End++;
            Start++;
            Dst++;
         }
        // 相等时继续遍历不赋值
        else
        {
            Start++;
            End++; 
        }
    }
    // 考虑End已经越界的时候
    nums[Dst] = nums[Start];
    Dst++;
    return Dst;
}
int* findErrorNums(int* nums, int numsSize, int* returnSize){
    int initialSum = accumulate(0, numsSize, nums);
    printf("%d", initialSum);
    //put the element of nums into set to remove the duplicate number
    int s = set(nums, numsSize);

    //sum of elements of the set
    int sum = accumulate(0, numsSize, nums);
    printf("%d", sum);
    //difference of initialSum and sum will give us the repeated number
    int repeatedNum = initialSum - sum;

    //subtracting the sum of elements in set i.e. sum from the sum of the natural numbers will give us the missing number
	int n = numsSize;
    int missingNum = n * (n+1)/2 - sum;
    int* res[2] = {repeatedNum, missingNum};
    *returnSize = 2;
    return res;
}

int main()
{
    /* code */
    int nums[] = {1,2,3,3};
    int n = 4;
    int* k = findErrorNums(nums, n, &n);
    return 0;
}
