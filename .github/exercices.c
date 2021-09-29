
#include <stdio.h>
#include"fonctions.h"

void EXERCICE1(){
        int a = 0 ; int b = 0;
        printf("saisissez un entier : \n");
        scanf("%d",&a);
        printf("saisissez un entier : \n");
        scanf("%d",&b);
        printf("le plus grand entier est %d: \n", getMax(a,b));
        return;
    }

void EXERCICE3(){
        int lar = EXERCICE2(); int lon = EXERCICE2();
        printf("l'aire du rectangle est : %d \n" , calculeAire(lon, lar));
        printf("le perimetre du rectangle est : %d \n" , calculePerimetre(lon,lar));

        return;

    }

void EXERCICE4(){
    int a = EXERCICE2(),b = 3, entier = 0;
    printf("reponse : %d  \n", multiple(a,b));
    printf(multipleEtSup(entier));
    return;

}

void EXERCICE5(){
    int note1 = EXERCICE2(), note2 = EXERCICE2(),note3 = EXERCICE2();
    printf("la moyenne est : %d", moyenne(note1,note2,note3));

    return;
}