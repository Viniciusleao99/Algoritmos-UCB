/*Elabore um programa que faça a leitura de vários números inteiros até que se digite
um número negativo. O programa tem de retornar o maior e o menor número lido */

#include <stdio.h>

int main() {
    int numero, maior = 0, menor = 0, primeiro = 1;

    printf("Digite um numero inteiro (negativo para sair): ");
    scanf("%d", &numero);

    while (numero >= 0) {
        if (primeiro) {
            maior = numero;
            menor = numero;
            primeiro = 0;
        } else {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }

        printf("Digite outro numero inteiro (negativo para sair): ");
        scanf("%d", &numero);
    }

    printf("O maior numero lido foi: %d\n", maior);
    printf("O menor numero lido foi: %d\n", menor);

    return 0;
}
