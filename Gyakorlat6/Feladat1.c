#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0

int main()
{
    char abc[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
                  'w', 'x', 'y', 'z'}; // nincs lezáró nulla a végén!
    int i, found = FALSE;
    char key;


    printf("Give the character you're searching for: ");
    scanf(" %c", &key); // VAGY key = getchar();
    if (isalpha(key))
    {
        for (i = 0; i < sizeof(abc) && !found; i++)
        {
            if (abc[i] == key || abc[i] == tolower(key))
            {
                found = TRUE;
            }
        }
        printf("This character is the %d. in the ABC.\n", i);
    }
    else
        printf("This character is not an ABC letter.\n");

    
    return 0;
}