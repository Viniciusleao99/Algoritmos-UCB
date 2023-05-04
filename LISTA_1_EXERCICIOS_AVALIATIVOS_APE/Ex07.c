/*Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário.
Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de
ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos
anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34. */

#include <stdio.h>

int main() {
    int n, termoAtual = 0, termoAnterior1 = 0, termoAnterior2 = 1;

    printf("Digite o valor de n: ");
    scanf("%i", &n);

    if (n == 0) {
        termoAtual = 0;
    } else if (n == 1) {
        termoAtual = 1;
    } else {
        for (int i = 2; i <= n; i++) {
            termoAtual = termoAnterior1 + termoAnterior2;
            termoAnterior1 = termoAnterior2;
            termoAnterior2 = termoAtual;
        }
    }

    printf("O enesimo termo da sequencia de Fibonacci eh: %i", termoAtual);

    return 0;}
