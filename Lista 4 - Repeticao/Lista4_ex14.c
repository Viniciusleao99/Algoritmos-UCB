//  Elabore um programa que faça a leitura de vários números inteiros até que se digite um número negativo. O programa tem de retornar o maior e o menor número lido.
#include<stdio.h>
int main(){
    int n, maior = 0, menor = 100000;

    printf("Digite um numero:");
    scanf("%i", &n);

    while (n > 0){

        if(n > maior)
            maior = n;
        if(n < menor)
            menor = n;

    printf("Digite um numero:");
    scanf("%i",&n);}

    printf("O maior numero digitado foi: %i\n", maior);
    printf("O menor numero digitado foi: %i", menor);
return 0;}