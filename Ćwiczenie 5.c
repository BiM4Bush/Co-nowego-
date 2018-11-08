//Program wczytuje liczbê ca³kowit¹ i liczy sumê cyfr z których zbudowana jest liczba.

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

