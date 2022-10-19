#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int array[10];
    int i, size = sizeof(array) / sizeof(int);
    int divider, counter, minindex;
    bool found;


    srand(time(0));
    // tömb feltöltése 10 és 100 közé eső számokkal
    for (i = 0; i < size; i++)
    {
        array[i] = rand() % 91 + 10;
        printf("%d. szám: %d\n", i + 1, array[i]);
    }
    // legkisebb prímszám keresése
    counter = 0;
    for (i = 0; i < size; i++)
    {
        found = false;
        divider = 2;
        while (divider < sqrt(array[i]) && !found)
        {
            if (array[i] % divider == 0)
                found = true;
            divider++;
        }
        if (!found)
        { // ha prímszám
            printf("Prímszám: %d\n", array[i]);
            counter++;
            if (counter == 1) // az első prímszám esetén
                minindex = i;
            else if (array[i] < array[minindex]) // nem az első prímszám esetén
                minindex = i;
        }
    }
    if (counter > 0)
        printf("A legkisebb prímszám: %d\n", array[minindex]);
    else
        printf("Nincs prímszám a listában\n");

    return 0;
}