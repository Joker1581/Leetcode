#include <stdio.h>
#include <stdlib.h>
int* fairCandySwap(int* aliceSizes, int aliceSizesSize, int* bobSizes, int bobSizesSize, int* returnSize){
    int sumA = 0, sumB = 0;
    for (int i = 0; i < aliceSizesSize; i++)
    {
        /* code */
        sumA += aliceSizes[i];
    }
    for (int i = 0; i < bobSizesSize; i++)
    {
        /* code */
        sumB += bobSizes[i];
    }
    int dif = (sumA - sumB) / 2;
    for (int i = 0; i < aliceSizesSize; i++)
    {
        /* code */for (int j = 0; j < bobSizesSize; j++)
        {
            /* code */
            if (aliceSizes[i] - bobSizes[j] == dif)
            {
                /* code */
                *returnSize = 2;
                int* res = (int*)malloc(2*sizeof(int));
                res[0] = aliceSizes[i];
                res[1] = bobSizes[j];
                return res;
            }
            
        }
        
    }
    *returnSize = 0;
    return;
}