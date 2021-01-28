#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int objetosc_prostopadloscianu(int dl, int sz, int wys)
{
    int wynik;
    wynik = dl * sz * wys;

    return wynik;
}

int objetosc_ostroslupa(int podst, int wys_2)
{
    int wynik_2;
    wynik_2 = ((1/3) * podst * podst * wys_2);

    return wynik_2;
}

int main(void)
{
    int a, b, c, w, w2, d, h, zmienna;

    printf("Kliknij 1, jezeli chcesz obliczyc objetosc prostopadloscianu. \n");
    printf("Kliknij 2, jezeli chcesz obliczyc objetosc ostroslupa. \n");

    scanf("&d", &zmienna);

    switch(zmienna)
{
        case 1:

            printf("Podaj dlugosci, szerokosc oraz wysokosc: \n");
            scanf("%d %d %d", &a, &b, &c);

            if (a <= 0 || b <= 0 || c <= 0){
                printf("Podano zle wartosci!!");

            }else {
                w = objetosc_prostopadloscianu(a, b, c);
                printf("Objetosc prostopadloscianu wynosi: %d \n", w);
    }
        break;

        case 2:

            printf("Podaj wymiar podstawy oraz wysokosc: \n");
            scanf("%d %d", &d, &h);

            if (d <= 0 || h <= 0){
                printf("Podano zle wartosci!!");

            }else {
                w2 = objetosc_ostroslupa(d, h);
                printf("Objetosc ostroslupa wynosi: %d \n", w2);
    }
        break;
}
return 0;
}

