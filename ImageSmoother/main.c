#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
int** imageSmoother(int** img, int imgSize, int* imgColSize, int* returnSize, int** returnColumnSizes) {
        int m=imgSize, n=*imgColSize;
        int** res = malloc(sizeof(int*)*m);
        *returnColumnSizes = malloc(sizeof(int)*m);
        *returnSize = m;
        for (int i = 0; i < m; i++)
        {
            /* code */
            res[i] = malloc(sizeof(int)*n);
            (*returnColumnSizes)[i] = n;
        }
        
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++){
                
                int avg=0,c=0;
                for(int x=max(i-1,0);x<min(i+2,m);x++)
                    for(int y=max(j-1,0);y<min(j+2,n);y++)
                        avg+=img[x][y],c++;
                
                res[i][j]=avg/c;
            }
        return res;
    }