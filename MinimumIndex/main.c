#include <stdio.h>
#include <stdlib.h>
#include <uthash.h>
#define min(a,b) a<b?a:b
#define LENGTH 31
typedef struct{
    char word[LENGTH];
    int index_1;
    int index_2;
    int index_sum;
    UT_hash_handle hh;
}myHashTable_t;

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** findRestaurant(char ** list1, int list1Size, char ** list2, int list2Size, int* returnSize){

    int i, min_sum = INT_MAX;
    myHashTable_t *words = NULL;
    myHashTable_t *element;

    for (i=0; i<list1Size; i++)
    {
        element = (myHashTable_t*)malloc(sizeof(*element));
        strcpy(element->word, list1[i]);
        element->index_1 = i;
        HASH_ADD_STR(words, word, element);
    }

    
    for (i=0; i<list2Size; i++)
    {
        HASH_FIND_STR(words, list2[i], element);
        if (element!=NULL)
        {
            element->index_2 = i;
            element->index_sum = element->index_1 + i;
            min_sum = min(min_sum, element->index_sum);
        }
    }

    *returnSize =0;
    myHashTable_t *s;
    for (s=words; s!=NULL; s=s->hh.next){
        if (s->index_sum == min_sum)
            *returnSize += 1;
    }

    i=0;
    char **ans = (char**)malloc(*returnSize * sizeof(char*));
    for (s=words; s!=NULL; s=s->hh.next){
        if (s->index_sum == min_sum)
        {
            ans[i] = (char*)malloc(sizeof(char)*LENGTH);
            strcpy(ans[i], s->word);
            i++;
        }
    }    
    return ans;
}

// Time Complex : O(M+N)
// Space Complex : O(M)