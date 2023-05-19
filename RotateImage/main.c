#include <stdio.h>
#include <stdlib.h>
void swap(int* p, int* q)
{
    int t = *p; *p = *q; *q = t;
}
void rotate(int** matrix, int matrixSize, int* matrixColSize){
    for(int r = 0; r < matrixSize/2; r++) 
    {
        int cSize = matrixColSize[r];
        //the rotating area is shrinking as rotation goes on;
        for(int c = r; c < (cSize-r-1) ; c++) 
        {
            int t = matrix[r][c];
            swap(&t, &matrix[c][cSize-r-1]);
            swap(&t, &matrix[cSize-r-1][cSize-c-1]);
            swap(&t, &matrix[cSize-c-1][r]);
            swap(&t, &matrix[r][c]);
        }
    }
}