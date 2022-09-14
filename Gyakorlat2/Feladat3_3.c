#include<stdio.h>

int main()
{
    int a, b , c;
    
    printf("\nSzamologep\n");
    scanf("%d", &a);
    scanf("%d", &b);
    c = a + b;    
    printf("%d + %d = %d\n", a, b, c);
    c = a * b;
    printf("%d * %d = %d\n", a, b, c);
    c = a - b;
    printf("%d - %d = %d\n", a, b, c);


    return 0;
}