/*Elabore um algoritmo em C, que exiba o total de números impares solicitados pelo o usuário utilizando a estrutura de repetição While*/

#include<stdio.h>

int main(){
    int num, contador = 0, i = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%i", &num);

    while(i <= num) {
        if(i % 2 != 0) 
            contador++;
        i++;}

    printf("O total de numeros impares no intervalo de 1 a %i e: %i", num, contador);
return 0;}