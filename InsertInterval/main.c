#include <stdio.h>
#include <stdlib.h>
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** insert(int** intervals, int intervalsSize, int* intervalsColSize, int* newInterval, int newIntervalSize, int* returnSize, int** returnColumnSizes){
    int **result = malloc(sizeof(int *) * (intervalsSize + 1));     // allocating for worst case
    *returnSize = 0;
    
    for(int i = 0; i < intervalsSize; i++) {
        if(newInterval[1] < intervals[i][0]) { 					// need not merge case
            result[*returnSize] = malloc(sizeof(int) * 2);
            result[*returnSize][0] = newInterval[0];
            result[*returnSize][1] = newInterval[1];
            (*returnSize)++;
            // append rest of the intervals to result and return
            for(;i < intervalsSize; i++) {
                result[*returnSize] = malloc(sizeof(int) * 2);
                result[*returnSize][0] = intervals[i][0];
                result[*returnSize][1] = intervals[i][1];
                (*returnSize)++;
            }
            *returnColumnSizes = malloc(sizeof(int) * (*returnSize));
            for(int i = 0; i < *returnSize; i++)
                (*returnColumnSizes)[i] = 2;
            return result;
        } else if(newInterval[0] > intervals[i][1]) {      	 	// need not merge case
            result[*returnSize] = malloc(sizeof(int) * 2);
            result[*returnSize][0] = intervals[i][0];
            result[*returnSize][1] = intervals[i][1];
            (*returnSize)++;
        } else {    											// merge case
            newInterval[0] = fmin(newInterval[0], intervals[i][0]);
            newInterval[1] = fmax(newInterval[1], intervals[i][1]);
            // may ned to merge futher intervals. do not add to result yet
        }
    }
    // if we are here then need to add new interval
    result[*returnSize] = malloc(sizeof(int) * 2);
            result[*returnSize][0] = newInterval[0];
            result[*returnSize][1] = newInterval[1];
            (*returnSize)++;
    
    *returnColumnSizes = malloc(sizeof(int) * (*returnSize));
    for(int i = 0; i < *returnSize; i++)
        (*returnColumnSizes)[i] = 2;
    
    return result;
}