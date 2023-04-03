#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
double findMaxAverage(int* nums, int numsSize, int k){
    // int* arr = (int*)malloc(numsSize*sizeof(int));
    // arr[0] = 0;
    // for (int i = 0; i < numsSize; i++)
    // {
    //     /* code */
    //     arr[i] = arr[sizeof(arr) / sizeof(int) - 1] + nums[i];
    // }
    // double max = arr[k];
    // for (int i = 0; i < numsSize-k+1; i++)
    // {
    //     /* code */
    //     if (arr[i+k] - arr[i] > max)
    //         max = arr[i+k] - arr[i];
    // }
    // return max / k;
    double sum = 0;
    double max_sum = 0;
    int i = 0;
    for (i; i < k; i++)
    {
        /* code */
        sum += nums[i];
    }
    max_sum = sum;
    int j = 0;
    while (i < numsSize)
    {
        sum -= nums[j++];
        sum += nums[i++];
        if (sum > max_sum)
            max_sum = sum;
    }
    return max_sum / k;
}

int main()
{
    int nums[6] = {1,12,-5,-6,50,3};
    int k = 4;
    double res = findMaxAverage(nums, 6, k);
    printf("%lf", res);
    return 0;
}
