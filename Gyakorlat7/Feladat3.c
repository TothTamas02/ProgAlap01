#include <stdio.h>
#include <stdlib.h>

int tokeletes(int szam);
int kisebboszto_osszeg(int szam);

int main()
{
    int x;

    printf("Adj meg egy egesz szamot: ");
    scanf(" %d", &x);
    if(tokeletes(x)) printf("\n A megadott szam tokeletes\n");
    else printf("\nA megadott szam nem tokeletes");
    //printf("%s", tokeletes(x) ? "Tokeletes szam" : "Nem tokeletes szam");

    return 0;
}

int tokeletes(int szam)
{
    if (szam == kisebboszto_osszeg(szam))
        return 1;
    
    return 0;
}

int kisebboszto_osszeg(int szam)
{
    int osszeg, oszto;
    osszeg = 0;
    for(oszto = 1; oszto <= szam/2; oszto++)
    {
        if(szam % oszto == 0)
            osszeg += oszto;
    }
    return osszeg;
}