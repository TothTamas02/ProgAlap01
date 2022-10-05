#include <stdio.h>
#include <stdlib.h>                      //rand(), srand() fvhíváshoz
#include <time.h>                        //time() fvhíváshoz

#define MERET 5

int main()
{
    int i, j;
    int lotto[MERET], jelolt;

    srand(time(0));                     //véletlenszám generátor inicializálása

    for (i = 0; i < MERET;)
    {
        jelolt = rand()%90+1;           //rand()%dx : [0...x) intervallumból ad vissza egy egész számot
        for (j = 0; j < i; j++)
        {
            if(lotto[j] == jelolt)      //ismétlődés elkerülése
            break;
        }
        if(j==i)
        {
            lotto[i] = jelolt;
            i++;
        }
        
    }
    //tömb kiírása
    for (int i = 0; i < MERET; i++)
    {
        printf("%d. szam: %d\n", i+1,lotto[i]);
    }
        

    return 0;
}