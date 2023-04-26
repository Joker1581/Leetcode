#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp (const void* a, const void* b){
    return *(int*)a - *(int*)b;
}
int heightChecker(int* heights, int heightsSize){
    int* cpy = (int*)malloc(heightsSize*sizeof(int));
    memcpy(cpy, heights, heightsSize);
    qsort(cpy, heightsSize, sizeof(int), cmp);
    int res = 0;
    for (int i = 0; i < heightsSize; i++)
    {
        /* code */
        printf("%d", cpy[i]);
        if (heights[i] != cpy[i]) res++;
    }
    return res;
}