#include <stdio.h>
#include <stdlib.h>
int* GetNext(char ch[], int length, int next[])
{
    next[1] = 0;
    int i = 1, j = 0;
    while (i <= length)
    {
        /* code */
        if (j==0 || ch[i] == ch[j]) next[++i] = ++j;
        else j = next[j];
    }
    return next;
}

int main(int argc, char const *argv[])
{
    char ch[5] = "ababa";
    int next[5];
    int* a1 = GetNext(ch, 5, next);
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("%c", a1[i]);
    }
    
    return 0;
}
