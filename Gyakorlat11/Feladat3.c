#include <stdio.h>
#include <stdlib.h>

#define N 3

void beolvas(int* x);

int main()
{
    int a[N];
    beolvas(&a[0]);

    for (int i = 1; i < N; i++)
    { 
        int ok, b;
        do
        {
            ok = 1;
            beolvas(&b);
            for (int j = 0; j < i; j++)
            {
                 if(a[i] == b)
            {
                printf("Invalid input\n");
                ok = 0;
            }
            else 
            {
                a[i] = b;
            }
            }
            
           
        } while (!ok);
        
    }
    

   for (int i = 0; i < 3; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}

void beolvas(int* x)
{
    int ok;
    char c;
    do
    {
        ok = 1;
        if(scanf(" %d", x) != 1)
        {
            printf("Invalid input\n");
            ok = 0;
            while((c = getchar()) != '\n');
        }
        else if(*x < 1 || *x > 9)
        {
            printf("Invalid input\n");
            ok = 0;
            while((c = getchar()) != '\n');
        }
    } while (!ok);
    
}