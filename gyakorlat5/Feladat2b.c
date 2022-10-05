#include <stdio.h>
#include <stdlib.h>

#define N 12

int main()
{
    int i, ok;
    double tomb[N];
    char c;
    /* Tömbelemek ellenőrzött beolvasása */
    printf("HUF/EUR árfolyamok:\n");
    for (i = 0; i < N; i++)
    {
        do
        {
            ok = 1;
            printf("%d. érték: ", i + 1);
            if (scanf("%lf", &tomb[i]) != 1)
            {
                printf("Hibás adat. Adja meg újra:\n");
                ok = 0;
                while ((c = getchar()) != '\n')
                    ;
            }
        } while (!ok || tomb[i] < 270 || tomb[i] > 320); //értékkorlátozás
    }
    // Eldöntés algoritmus
    // Feltesszük, h. monoton növő a sorozat, nincs a monotonitást elrontó érték
    int found = 0;
    /* Monotonitás vizsgálat */
    for (i = 1; i < N && !found; i++)
    {
        if (tomb[i] < tomb[i - 1])
            found = 1; // talált a monotonitást elrontó elemet
    }
    printf("A sorozat monoton növő: %s", !found ? "igaz" : "hamis");
    
    return 0;
}