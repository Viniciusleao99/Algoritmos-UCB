/*Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido*/

#include <stdio.h>
int main(){
    int i = 0, num, menor, maior;

    while (i<=9)
    { printf("Digite o numero %d: ", i +1);
    scanf("%d", &num);
     if (num < menor){
        menor = num;}
     if (num> maior){
     maior = num;}
     i++;}
    
    printf("\n o maior numero: %d", maior);
    printf("\n o menor numero: %d", menor);
return 0;}