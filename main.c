//
//  main.c
//  dec_na_bin_rekurencja
//
//  Created by Maciej Drozdowicz on 19/12/2017.
//  Copyright © 2017 Maciej Drozdowicz. All rights reserved.
//

#include <stdio.h>
void konwersja(int n)
{
    int cyfra;
    if (n>0)
    {
        konwersja(n/16);
        cyfra = n % 16;
        switch (cyfra) {
            case 10:
                printf("A");
                break;
            case 11:
                printf("B");
                break;
            case 12:
                printf("C");
                break;
            case 13:
                printf("D");
                break;
            case 14:
                printf("E");
                break;
            case 15:
                printf("F");
                break;
            default: printf("%d" , cyfra);


        }
    }
    
}

int main(int argc, const char * argv[]) {
    int n;
    printf("Program wyswietlajacy szesnastkowa postac liczby:\n");
    printf("Podaj n: = ");
    scanf("%d", &n);
    konwersja(n);
    printf("\n");
    
    return 0;
}
