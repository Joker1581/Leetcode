#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
char * sortSentence(char * s){
    int len = strlen(s), startIdx = 0, qIdx = 0, maxQIdx = 0, ansLen = 0;
    char** q = (char**)calloc(9, sizeof(char*));
    for(int i = 0; i < len; i++){
        if(s[i]>='0' && s[i]<='9')
        {
            int len = i - startIdx;
            qIdx = s[i]-'1';
            q[qIdx] = (char*)calloc(len+1 , sizeof(char));
            for(int j = startIdx; j < i; j++)
                q[qIdx][j-startIdx] = s[j];
            q[qIdx][len] = '\0';
            startIdx = i+2;
            ansLen += (len+1);
            if(qIdx > maxQIdx) maxQIdx = qIdx;
        }
    }
    char* ans = (char*)calloc(ansLen, sizeof(char));
    qIdx = 0;
    startIdx = 0;
    while(qIdx <= maxQIdx)
    {
        len = strlen(q[qIdx]);
        for(int i = 0; i < len; i++)
            ans[startIdx++] = q[qIdx][i];
        free(q[qIdx]);
        ans[startIdx++] = ' ';
        qIdx++;
    }
    ans[--startIdx] = '\0';
    free(q);
    return ans;
}