#include <stdio.h>
#include <stdlib.h>
#include<math.h>

typedef struct pont
{
    double x;
    double y;
}Pont;

typedef struct kor
{
    Pont kp;
    double r;

}Kor;

void beolvas(Kor *k);
int atfed(Kor k1, Kor k2);

int main()
{
    Kor a, b;

    beolvas(&a);
    beolvas(&b);

    printf("%s\n", atfed(a, b) ? "Atfedik egymast." : "Nem fedik at egymast.");

    return 0;
}

void beolvas(Kor *k)
{
    scanf("%lf %lf %lf", &k->kp.x, &k->kp.y, &k->r);
    return ;
}

int atfed(Kor k1, Kor k2) 
{
    return sqrt(pow(k1.kp.x-k2.kp.x, 2)+pow(k1.kp.y-k2.kp.y, 2))<k1.r+k2.r;
}