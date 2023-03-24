/*Elabore um algoritmo em C, que calcule a média de 3 notas pelo o usuário utilizando 
a estrutura de repetição While.*/
#include <stdio.h>

int main() {
    float nota, soma = 0;
    int i = 1;

    while(i <= 3) {
        printf("Digite a nota %i: ", i);
        scanf("%f", &nota);
        soma += nota;
        i++;}

    printf("A media das notas e: %.2f", soma/3);

    return 0;}