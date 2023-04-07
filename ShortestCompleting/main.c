#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
static int primes[30] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103};

long getCharProduct(char* plate)
{
    long product = 1;
    for (int i = 0; i < strlen(plate); i++)
    {
        /* code */
        int index = plate[i] - 'a';
        if (0 <= index && index <= 25)
        {
            /* code */
            product *= primes[index];
        }
        
    }
    return product;
}
char* toLower(char* plate)
{
    for (int i = 0; i < strlen(plate); i++)
    {
        /* code */
        if (plate[i] >= 'A' && plate[i] <= 'Z')
        {
            /* code */
            plate[i] += 32;
        }
        
    }
    return plate;
}

char * shortestCompletingWord(char * licensePlate, char ** words, int wordsSize){
    long charProduct = getCharProduct(toLower(licensePlate));
    char* shortest = "aaaaaaaaaaaaaaaa";
    for (int i = 0; i < wordsSize; i++)
    {
        /* code */
        if (strlen(words[i]) < strlen(shortest) && getCharProduct(words[i]) % charProduct == 0)
        {
            /* code */
            shortest = words[i];
        }
        
    }
    return shortest;
}