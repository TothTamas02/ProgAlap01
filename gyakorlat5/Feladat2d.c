#include <stdio.h>
#include <stdlib.h>

#define N 12

int main()
{
    int i;
    double tomb[N], *p, atlag = 0.0;
    /* Tömb feltöltése véletlenszámokkal */
    /* lásd előző feladatrész */

    /* Tömbelemek összegzése */
    for (i = 0; i < N; i++)
    {
        atlag += tomb[i];
    }
    /* Átlag kiszámítása */
    atlag /= N;
    printf("\nAz atlag: %.2f\n", atlag);
    /* Tömbelemek átlagtól való eltérésének kiírása */
    for (i = 0; i < N; i++)
        printf("%d. \t %.2f \t %.2f\n", i + 1, tomb[i], tomb[i] - atlag);

    // A p pointer mindvégig a tömb első elemére mutat; i a ciklusváltozó.
    for (p = tomb, i = 0; i < N; i++)
        printf("%d. \t %.2f \t %.2f\n", i + 1, *(p + i), p[i] - atlag);

    // A p pointer mindig a tömb feldolgozás alatt álló elemére mutat;
    // az i sorszám csak a kiíratáshoz kell.
    for (p = tomb, i = 0; p <= &tomb[N - 1]; i++, p++)
        printf("%d. \t %.2f \t %.2f\n", i + 1, *p, (*p) - atlag);

    return 0;
}