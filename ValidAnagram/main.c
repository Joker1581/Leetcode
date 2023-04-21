#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char * s, char * t){
    int* arr = (int*)calloc(26, sizeof(int));
    for (int i = 0; i < strlen(s); i++)
    {
        /* code */
        arr[s[i] - 'a']++;
    }
    for (int i = 0; i < strlen(t); i++)
    {
        /* code */
        arr[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
        /* code */
        if (arr[i] != 0) return false;
    }
    return true;
}