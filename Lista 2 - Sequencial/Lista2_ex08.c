/* Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo a fórmula: 
DIFERENCA = (A * B - C * D). Apresente o resultado da seguinte forma: 
DIFERENCA = (“valor de A” * “valor de B” - ““valor de C” * ““valor de D”) 
DIFERENCA = “valor de DIFERENCA */ 

#include <stdio.h> 
int main(){
    int A, B, C, D, x;
    printf("Digite quatro numeros:");
    scanf("%i%i%i%i",&A, &B, &C, &D);
    x = A * B - C * D;
    printf("O valor da Diferenca dos produtos de %i e %i por %i e %i e igual a: %i", A, B, C, D, x);
return 0;}