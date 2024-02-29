#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, *q;
    int i;
    p = (int *)malloc(5 * sizeof(int));
    p[0] = 3;
    p[1] = 1;
    p[2] = 2;
    p[3] = 4;
    p[4] = 11;
    q = (int *)malloc(6 * sizeof(int));
    for (i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }
    free(p);
    p = q;
    q = NULL;
    for (i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }
    return 0;
}
