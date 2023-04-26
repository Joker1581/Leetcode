#include <stdio.h>
#include <stdlib.h>
#define MAP_SIZE 1001
int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize){
    *returnSize = arr1Size;
    int map[MAP_SIZE] = {0};
    for (int i = 0; i < arr1Size; i++)
    {
        /* code */
        map[arr1[i]] ++;
    }
    int j = 0;
    for (int i = 0; i < arr2Size; i++)
    {
        /* code */
        while (map[arr2[i]]-- > 0)
        {
            /* code */
            arr1[j++] = arr2[i];
        }
        
    }
    for (int i = 0; i < 1001; i++)
    {
        /* code */
        while (map[i]-- > 0)
        {
            /* code */
            arr1[j++] = i;
        }
        
    }
    return arr1;
    
}