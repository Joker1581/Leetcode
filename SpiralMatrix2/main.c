#include <stdio.h>
#include <stdlib.h>
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generateMatrix(int n, int* returnSize, int** returnColumnSizes)
{
    *returnSize = n;
    *returnColumnSizes = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++)
        (*returnColumnSizes)[i] = n;

    int** res = malloc(sizeof(int*) * n);
    for(int i = 0; i < n; i++)
        res[i] = malloc(sizeof(int) * n);

    int left = 0;
    int top = 0;
    int right = n - 1;
    int bottom = n - 1;
    int i = 1;
    while(i <= (n * n))
    {
        for(int c = left; c <= right; c++)
            res[top][c] = i++;
        for(int r = top + 1; r <= bottom; r++)
            res[r][right] = i++;
        for(int c = right - 1; c >= left; c--)
            res[bottom][c] = i++;
        for(int r = bottom - 1; r >= top + 1; r--)
            res[r][left] = i++;
        left++;
        top++;
        right--;
        bottom--;
    }
    return res;    
}