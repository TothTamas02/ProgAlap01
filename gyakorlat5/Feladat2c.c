#include <stdio.h>
#include <stdlib.h>

#define N 12

int main()
{
    int i, minindex, maxindex;
    double tomb[N], min, max;
    /* Tömb automatikus feltöltése */
    srand(time(0)); // stdlib.h, time.h
    int upper = 320, lower = 270;
    double range = upper - lower;
    double div = RAND_MAX / range;
    double value;
    for (i = 0; i < N; i++)
    {
        // tomb[i] = (double)(rand()%(upper-lower+1)+lower); // pl.: 310.000000
        value = lower + (rand() / div);     // pl.: 310.123456
        tomb[i] = round(value * 100) / 100; // pl.: 310.120000
    }

    /* Tömbelemek kiírása */
    printf("HUF/EUR árfolyamok:\n");
    for (i = 0; i < N; i++)
    {
        printf("%d. érték: %lf\n", i + 1, tomb[i]);
    }
    /* Minimum kiválasztás */
    minindex = 0;
    for (i = 0; i < N; i++)
    {
        if (tomb[i] < tomb[minindex])
            minindex = i;
    }
    printf("\nA sorozat legkisebb eleme: %lf, sorszáma: %d", tomb[minindex], minindex + 1);

    /* Maximum kiválasztás */
    maxindex = 0;
    for (i = 0; i < N; i++)
    {
        if (tomb[i] > tomb[maxindex])
            maxindex = i;
    }
    printf("\nA sorozat legnagyobb eleme: %lf, sorszáma: %d", tomb[maxindex],
           maxindex + 1);

    return 0;
}