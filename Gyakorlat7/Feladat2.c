#include <stdio.h>
#include <stdlib.h>

void csere(int* x, int* y);

int main()
{
    int a = 5, b = 10;

    csere(&a, &b);
    printf("a = %d, b = %d\n");

    return 0;
}

void csere(int* x, int*y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;

    return ;
}