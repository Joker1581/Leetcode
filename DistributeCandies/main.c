#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int distributeCandies(int* candyType, int candyTypeSize)
{    
    int different_candy_cnt = 1;
    int edible_candies = candyTypeSize / 2;
    
    qsort(candyType, candyTypeSize, sizeof(int), cmp);
    
    for (int i = 0, j = 0; j  < candyTypeSize; j++) {
        if (candyType[i] != candyType[j]) {
            i = j;
            different_candy_cnt++;
        }
    }
    
    return (edible_candies > different_candy_cnt) ? different_candy_cnt : edible_candies;
}