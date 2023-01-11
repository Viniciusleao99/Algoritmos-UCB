/* Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável PROD. 
A seguir mostre a variável PROD com mensagem: PROD = “valor de PROD” */

#include <stdio.h>
int main(){
    int n1, n2, PROD;
    printf("Digite dois numeros:");
    scanf("%i%i", &n1, &n2);
    PROD = n1 * n2;
    printf("PROD = %i", PROD);
return 0;}