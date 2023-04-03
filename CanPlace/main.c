#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n){
    
    if (n == 0) return true;
    for (int i = 0; i < flowerbedSize; i++)
    {
        /* code */
        if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == flowerbedSize - 1 || flowerbed[i + 1] == 0)) 
        { // can place?
                -- n;
                if (n == 0) return true;
                flowerbed[i] = 1;
        }
    }
    return false;
}