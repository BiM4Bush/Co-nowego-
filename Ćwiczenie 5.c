//Program wczytuje liczb� ca�kowit� i liczy sum� cyfr z kt�rych zbudowana jest liczba.

#include <stdio.h>
int main()
{
    int liczba,suma=0;

    printf("Podaj liczbe :  ",liczba);
    scanf("%d",&liczba);
    while(liczba!=0)
    {
        suma+=liczba%10;
        liczba /= 10;
    }

    printf("Suma cyfr podanej liczby wynosi : %i",suma);

    getchar();
    return 0;
}

