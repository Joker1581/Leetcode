#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int maxProductDifference(int* nums, int numsSize){
    // find 4 numbers, 2 largest (A, B) and 2 smallest (C, D)
    // the maximum product difference is always (AB) - (CD)
    
    int larger, largest, smaller, smallest;
    int i, j;
    larger = largest = 0;
    smaller = smallest = 10001;
    
    for(i=0; i<numsSize; i++) {
        j = nums[i];
        
        if (j > largest) {
            larger = largest;
            largest = j;
        } else if (j > larger) {
            larger = j;
        }
        
        if (j < smallest) {
            smaller = smallest;
            smallest = j;
        } else if (j < smaller) {
            smaller = j;
        }
        
        
    }
        
    return ( (larger * largest) - (smaller * smallest) );
}