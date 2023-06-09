#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int cmp(const void* a, const void* b) {
    return *(const int*) a - *(const int*) b;
}

void backtrack(int* arr, int arrSize, int tar, int start, int cidx, int* returnSize, int** returnColumnSizes, int** res, int* tmp) {
    if (tar == 0) {
        (*returnColumnSizes)[(*returnSize)] = cidx;
        res[(*returnSize)] = (int*) malloc(cidx * sizeof(int));
        memcpy(res[(*returnSize)], tmp, cidx * sizeof(int));
        (*returnSize)++;
    } else {
        for (int i = start; i < arrSize; i++) {
            if (tar - arr[i] < 0) break;
            tmp[cidx] = arr[i];
            backtrack(arr, arrSize, tar - arr[i], i, cidx + 1, returnSize, returnColumnSizes, res, tmp);
        }
    }
}

int** combinationSum(int* candidates, int candidatesSize, int target, int* returnSize, int** returnColumnSizes) {
    qsort(candidates, candidatesSize, sizeof(int), cmp);
    *returnSize = 0;
    int size = 125;
    int** res = (int**) malloc(size * sizeof(int*));
    int* tmp = (int*) malloc(size * sizeof(int));
    *returnColumnSizes = (int*) calloc(size, sizeof(int));
    backtrack(candidates, candidatesSize, target, 0, 0, returnSize, returnColumnSizes, res, tmp);
    free(tmp);
    return res;
}