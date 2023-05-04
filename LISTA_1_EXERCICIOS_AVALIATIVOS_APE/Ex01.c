/*Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo a fórmula: 
DIFERENCA = (A * B - C * D). Apresente o resultado da seguinte forma:
DIFERENCA = (“valor de A” * “valor de B” - ““valor de C” * ““valor de D”)
DIFERENCA = (“valor de DIFERENCA”)*/

#include <stdio.h>

int main() {
    int a, b, c, d, diferenca;

    printf("Digite o valor de A: ");
    scanf("%i", &a);

    printf("Digite o valor de B: ");
    scanf("%i", &b);

    printf("Digite o valor de C: ");
    scanf("%i", &c);

    printf("Digite o valor de D: ");
    scanf("%i", &d);

    diferenca = (a * b) - (c * d);

    printf("DIFERENCA = (%i * %i - %i * %i)\n", a, b, c, d);
    printf("DIFERENCA = (%i)\n", diferenca);

    return 0;}