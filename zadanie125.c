#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int objetosc(int dl, int sz, int wys)
{
    int wynik;
    wynik = dl * sz * wys;

    return wynik;
}

int main(void)
{
    int a, b, c, w;

    printf("Podaj dlugosci, szerokosc oraz wysokosc: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0){
        printf("Podano zle wartosci!!");

    } else {
        w = objetosc(a, b, c);
        printf("Objetosc prostopadloscianu wynosi: %d \n", w);
    }
return 0;
}

