#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, db=0;
    //Tömb létrehozása inicializálós listával
    double tomb[] = {289.5,292.6,290.2,295.5,300.4,300.3,302.5,303.3,303.5,299.9};
    int meret = sizeof(tomb)/sizeof(double);
    double limit = 300.0;

    printf("HUF/EURO arfolyamok:\n");
    for (i = 0; i < meret; i++)
    {
        printf("%d. ertek: %.2f", i+1, tomb[i]);
        //Feltételt kielégítő elemek megszámlálása
        if (tomb[i] < limit) db++;
        
    }
    printf("\nAz arfolyam erteke %d-szer volt %.2f alatt.", db, limit);
    return 0;
    
}