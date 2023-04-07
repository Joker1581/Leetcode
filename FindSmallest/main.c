#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
char nextGreatestLetter(char* letters, int lettersSize, char target){
    char res = '{';
    for (int i = 0; i < lettersSize; i++)
    {
        /* code */
        if (letters[i] > target)
        {
            if (res > letters[i]) res = letters[i];
        }
    }
    if (res == '{') return letters[0];
    return res;
}