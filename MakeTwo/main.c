#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool canBeEqual(int* target, int targetSize, int* arr, int arrSize){
    bool result = true;
    if (arrSize != targetSize) {
        return false;
    }
    int map[1001] = {0};
    for (int i = 0; i < targetSize; i++) {
        map[target[i]]++;
        map[arr[i]]--;
    }
    for (int i = 0; i < 1001; i++) {
       if(map[i]!=0){
           result = false;
           break;
       }
    }
    return result;
}