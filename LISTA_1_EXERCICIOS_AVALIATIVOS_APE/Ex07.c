/*Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário.
Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de
ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos
anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34. */

#include <stdio.h>

int main() {
    int i, n, termo1 = 0, termo2 = 1, ProxTermo;

    printf("Digite qual termo deseja ver: ");
    scanf("%i", &n);

        for (int i = 1; i <= n; i++) {
            ProxTermo = termo1 + termo2;
            termo1 = termo2;
            termo2 = ProxTermo;
    }

    printf("O enesimo termo da sequencia de Fibonacci e: %i", ProxTermo);

    return 0;}