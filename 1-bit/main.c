#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool isOneBitCharacter(int* bits, int bitsSize){
    int ones = 0;
    for (int i = bitsSize - 2; i >= 0 && bits[i] != 0; i--)
    {
        /* code */
        ones ++;
    }
    if (ones % 2 > 0) return false;
    return true;
}