#include <stdio.h>
#include <stdlib.h>
int cmp(const void* a, const void* b)
{
    return *(int*)b - *(int*)a;
}
int findContentChildren(int* g, int gSize, int* s, int sSize){
    int res = 0;
    int gi = 0;
    int si = 0;
    qsort(g, gSize, sizeof(int), cmp);
    qsort(s, sSize, sizeof(int), cmp);
    while (gi < gSize && si < sSize)
    {
        /* code */
        if (s[si] >= g[gi])
        {
            /* code */
            res ++;
            gi ++;
            si ++;
        }else
        {
            gi ++;
        }
        
    }
    return res;
}