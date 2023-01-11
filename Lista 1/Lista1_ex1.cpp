//Construa um algoritmo que leia um número inteiro de horas e mostre ao usuário o correspondente em minutos e segundos destas horas.

#include <stdio.h>
int main(){
    int horas, minutos, segundos;
    printf("Digite a quantidade de horas");
    scanf("%i", &horas);
    minutos = horas*60;
    segundos = horas*3600;
    printf("Essa quantiade de horas equivale a:");
    printf( " Minutos %i", minutos);
    printf( " e Segundos %i", segundos);
return 0;}