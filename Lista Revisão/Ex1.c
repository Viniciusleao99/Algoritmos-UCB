/*Elabore um algoritmo em C, o qual o usuário informe 03 números, o algoritmo faça a comparação dos números, 
utilizando aestrutura condicional IF e ELSE e exiba para o usuário o maior número e o menor número.*/

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Informe o primeiro número: ");
    scanf("%i", &num1);

    printf("Informe o segundo número: ");
    scanf("%i", &num2);

    printf("Informe o terceiro número: ");
    scanf("%i", &num3);

    if(num1 > num2 && num1 > num3) {
        printf("O maior número é: %i\n", num1);
    } else if(num2 > num1 && num2 > num3) {
        printf("O maior número é: %i\n", num2);
    } else {
        printf("O maior número é: %i\n", num3);}

    if(num1 < num2 && num1 < num3) {
        printf("O menor número é: %i\n", num1);
    } else if(num2 < num1 && num2 < num3) {
        printf("O menor número é: %i\n", num2);
    } else {
        printf("O menor número é: %i\n", num3);}

 return 0;}