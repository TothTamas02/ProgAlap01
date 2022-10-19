#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* A bsearch() függvény működéséhez kell ez az összehasonlító függvény.
 Növekvő sorozat esetén a return utasításban fel kell cserélni
 a 'b' és 'a' változók megadásának sorrendjét. */

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

int main()
{
    int array[] = {11260, 9850, 9125, 6630, 5890, 5385, 4650, 3030, 2860, 2665};
    int i, size = sizeof(array) / sizeof(int);
    bool found;
    int first, last, middle;
    int search = 4650;
    // lineáris keresés ciklusmegszakítással
    found = false;

    for (i = 0; i < size && array[i] >= search; i++)
    {
        if (array[i] == search)
        {
            printf("A %d. versenyző pontszáma %d\n", i + 1, array[i]);
            found = true;
            break;
        }
    }
    if (i == size || !found)
        printf("Nem talált\n");

    // bináris keresés csökkenő sorozatban
    first = 0;
    last = size - 1;
    middle = (first + last) / 2;
    while (first <= last)
    {
        if (array[middle] < search)
            last = middle - 1;
        else if (array[middle] == search)
        {
            printf("A %d. versenyző pontszáma %d\n", middle + 1, search);
            break;
        }
        else
            first = middle + 1;
        middle = (first + last) / 2;
    }
    if (first > last)
        printf("Nem talált\n");

    // bsearch() használata
    int *item = (int *)bsearch(&search, array, size, sizeof(int), cmpfunc);
    if (item != NULL)
        printf("A versenyző sorszáma: %d, pontszáma %d\n", (item - array) + 1, *item);
    else
        printf("Nem talált\n");
        
    return 0;
}