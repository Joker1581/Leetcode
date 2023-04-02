#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool checkWord(char * word)
{
    char count[26] = {2,3,3,2,1,2,2,2,1,2,2,2,3,3,1,1,1,1,2,1,1,3,1,3,1,3};    
    for(int i=1; i<strlen(word); i++)
        if(count[tolower(word[i-1])-'a'] != count[tolower(word[i])-'a'])
            return false;
    return true;
}
char ** findWords(char ** words, int wordsSize, int* returnSize){
    char ** result = (char **)malloc(wordsSize*sizeof(char *));
    int count = 0;
    for(int i=0; i<wordsSize; i++)
        if(checkWord(words[i]))
        {
            result[count] = (char *)malloc((strlen(words[i])+1)*sizeof(char));
            strcpy(result[count++], words[i]);
        }
    *returnSize = count;
    return result;
}