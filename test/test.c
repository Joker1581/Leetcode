#include <stdio.h>
#include <stdlib.h>
int f1()
{
    float q = 2;
    q = 5/2;
    printf("%e", q);
    return 0;
}

void f2()
{
    int i=2,k=0;
    for ( i = 0; i < 4; i++)
    {
        /* code */
        if(i%2) k++;
        printf("%d %d\n", i, k);
    }
    printf("%d %d\n", i, k);
}

int main()
{
    /* code */
    f2();
    return 0;
}

