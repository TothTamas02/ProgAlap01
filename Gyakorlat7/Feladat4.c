#include <stdio.h>
#include <stdlib.h>

void int_beolvas(int *hatar);
int baratsagos(int a, int b);
int kisebboszto_osszeg(int szam);

int main()
{
    int alsohatar, felsohatar, i, j;

    int_beolvas(&alsohatar);
    do
    {
        int_beolvas(&felsohatar);
    } while (felsohatar < alsohatar);
    for (i = alsohatar; i <= felsohatar; i++)
    {
        for (j = i + 1; j <= felsohatar; j++)
        {
            if (baratsagos(i, j) == 1)
                printf("(%d,%d)\n", i, j);
        }
    }

    return 0;
}

void int_beolvas(int *hatar)
{
    char ch;
    int ok;

    do
    {
        ok = 1;
        printf("Adj meg egy szamot: ");
        if (scanf("%d", hatar) != 1)
        {
            printf("Hibas input\n");
            // hibás karakterek kitolvasása input bufferből
            while ((ch = getchar()) != '\n')
                ;
            ok = 0;
        }
    } while (!ok || *hatar < 0);

    return;
}

int baratsagos(int a, int b)
{
    if (a == kisebboszto_osszeg(b) && b == kisebboszto_osszeg(a))
        return 1;

    return 0;
}

int kisebboszto_osszeg(int szam)
{
    int osszeg, oszto;
    osszeg = 0;
    for (oszto = 1; oszto <= szam / 2; oszto += 1)
    {
        if (szam % oszto == 0)
            osszeg += oszto;
    }
    
    return osszeg;
}