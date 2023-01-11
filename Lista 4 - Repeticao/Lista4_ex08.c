/*Faça um programa que leia 10 inteiros e imprima sua média.*/

#include <stdio.h>

int main() {
    int i=0 , num= 0, soma =0, media =0;
    for ( i = 0; i < 10; i++) {
        printf("Digite a %d nota: ", i + 1);
        scanf("%d", &num);
        soma += num;}
    media = soma/2 ;
    printf("\nmedia = %d ",media);
return 0;}