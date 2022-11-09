#include <stdio.h>
#include <stdlib.h>

typedef struct datum
{
    int ev;
    int ho;
    int nap;
} Datum;

void beolvas(Datum *d);
void kiir(Datum d);
Datum regebbiDatum(Datum d1, Datum d2);
void beolvasFormazott(Datum *d);
int HanyEves(Datum d);

int main()
{
    Datum d1, d2, regebbi, d3;

    /*printf("Elso datum:\n");
    beolvasFormazott(&d1);
    printf("Masodik datum:\n");
    beolvasFormazott(&d2);

    regebbi = regebbiDatum(d1, d2);

    kiir(regebbi);*/

    printf("Adjon meg egy evszamot: ");
    beolvasFormazott(&d3);
    printf("%d eves",HanyEves(d3));

    return 0;
}

void beolvas(Datum *d)
{
    printf("Ev:");
    scanf("%d", &d->ev);
    printf("Ho:");
    scanf("%d", &d->ho);
    printf("Nap:");
    scanf("%d", &d->nap);

    return;
}

void kiir(Datum d)
{
    printf("Regebbi: %d.%d.%d.\n", d.ev, d.ho, d.nap);
    return;
}

Datum regebbiDatum(Datum d1, Datum d2)
{
    if (d1.ev == d2.ev)
    {
        if (d1.ho == d2.ho)
        {
            if (d1.nap >= d2.nap)
                return d2;
            else
                return d1;
        }
        else if (d1.ho > d2.ho)
            return d2;
        else
            return d1;
    }
    else if (d1.ev > d2.ev)
        return d2;
    else
        return d1;
}

void beolvasFormazott(Datum *d)
{
    char str[12];
    int ok;
    do
    {
        ok = 1;
        scanf("%s", str);
        if (sscanf(str, "%d.%d.%d.", &d->ev, &d->ho, &d->nap) != 3)
        {
            printf("Hibás a dátum!\n");
            ok = 0;
        }
    } while (!ok);
    return;
}

int HanyEves(Datum d)
{
    char ho[3];
    int ev, nap;
    sscanf(__DATE__, "%s %d %d", ho, &nap, &ev);
    printf("%s\n", __DATE__);
    return ev - d.ev;
}
