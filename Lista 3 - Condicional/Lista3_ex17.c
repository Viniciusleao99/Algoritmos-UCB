/* Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou 5, mas não simultaneamente pelos dois. */

#include<stdio.h>
int main(){
    int n;
    printf("Digite um numero inteiro:");
    scanf("%i", &n);

    if(n % 3 == 0 && n % 5 == 0)
        printf("Invalido!");
            else if (n % 3 == 0 || n % 5 == 0)
                printf("Valido!");
    else {printf("Invalido");}
return 0;}  