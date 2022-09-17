#include<stdio.h>

int main()
{
    double a, b , c;
    
    printf("\nSzamologep\n");
    scanf(" %lf", &a);
    scanf(" %lf", &b);
    c = a + b;    
    printf("%f + %f = %.2f\n", a, b, c);
    c = a * b;
    printf("%f * %f = %.2f\n", a, b, c);
    c = a - b;
    printf("%f - %f = %.2f\n", a, b, c);
    c = a / b;
    printf("%f / %f = %.2f\n", a, b, c);


    return 0;
}