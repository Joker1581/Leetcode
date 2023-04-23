#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char findTheDifference(char * s, char * t){
    char c = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        /* code */
        c ^= s[i];
    }
    for (int i = 0; i < strlen(t); i++)
    {
        /* code */
        c ^= t[i];
    }
    return c;
    
}