#include"fonctions.h"
#include <stdio.h>

/* Fonction qui donne le maximum entre 2 nombres
 * -> IN : les deux nombres entiers que l'on veut comparer
 * -> OUT : le plus grand des 2 nombres*/
int getMax(int a , int b){
    if (a<b)
    {
        return b;
    }
    else {
        return a;
    }

}

/* Fonction qui demande à l'utilisateur de saisir un entier
 * -> IN : none
 * -> OUT : l'entier saisi par l'utilisateur*/
int EXERCICE2(){
    int entier = 0;
    printf("saisissez un entier : \n");
    scanf("%d",&entier);
    return entier;

}

/* Fonction qui permet de calculer l'aire d'un rectangle
 * -> IN : la longueur et la largeur du rectangle (2 entiers)
 * -> OUT : l'aire du rectangle (entier)*/
int calculeAire(int lon , int lar ){
    int a;
     a= (lon*lar);

    return a;


}

/* Fonction qui permet de calculer le périmètre d'un rectangle
 * -> IN : la longueur et la largeur du rectangle (2 entiers)
 * -> OUT : le périmètre du rectangle (entier)*/
int calculePerimetre(int lon , int lar ){
    int b;
    b= ((lon*lar)*2);
    return b;
}

/* Fonction qui permet de savoir si un nombre est le multiple d'un autre
 * -> IN : les deux nombres en question (2 entiers)
 * -> OUT : 1 (Vrai) ou 0 (Faux)*/
int multiple(int a, int b){
    if (a%b==0){
        return 1;
    }
    else  {
        return 0;
    }

}

/* Fonction qui permet de savoir si un nombre est multiple de 3 et si il est superieur ou non a 10
 * -> IN : les deux nombres en question (2 entiers)
 * -> OUT : le nombre est un multiple de 3 ou non et le nombre est superieur ou non a 10*/
int multipleEtSup(int entier){
    printf("saisissez un entier : \n");
    scanf("%d", &entier);
    if (entier %3==0){
        printf("l'entier est un multiple de 3\n");
    }
    else {
        printf("l'entier n'est pas un multiple de 3\n");
    }
    if (entier>=10){
        printf("l'entier est superieur ou egal a 10\n");
    }
    else {
        printf("l'entier n'est pas superieur ou egal a 10\n ");
    }

    return 0;
}

/* Fonction qui permet de calculer la moyenne de 3 notes
 * -> IN : les 3 notes en questions (3 entiers)
 * -> OUT : la moyenne (entier)*/
int moyenne(int note1 , int note2, int note3){

    while ((note1)>20 || (note2)>20 || (note3)>20 || (note1)<0 || (note2)<0 || (note3)<0){
        return -1;
    }
    return ((note1 + note2 + note3)/3);


}

