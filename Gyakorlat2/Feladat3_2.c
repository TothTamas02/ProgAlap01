#include<stdio.h>

int main()
{
    double a= 5, b = 2, c;
    
    printf("\nSzamologep\n");
    c = a + b;    
    printf("%.0f + %.0f = %.2f\n", a, b, c);
    c = a * b;
    printf("%.0f * %.0f = %.2f\n", a, b, c);
    c = a - b;
    printf("%.0f - %.0f = %.2f\n", a, b, c);
    c = a / b;
    printf("%.0f / %.0f = %.2f\n", a, b, c);

    return 0;
}