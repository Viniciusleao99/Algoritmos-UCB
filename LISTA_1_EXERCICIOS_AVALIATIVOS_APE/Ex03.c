/*Faça um programa que calcule e mostre a área da superfície e o volume de uma esfera
sendo fornecido o valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R³. A
fórmula para calcular a área é: 4 * pi * R². Considere (atribua) para pi o valor 3.14159. Use o
conceito de constante Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3), pois algumas
linguagens (dentre elas o C++), assumem que o resultado da divisão entre dois inteiros é outro inteiro */

#include <stdio.h>

#define PI 3.14159

int main() {
    float raio, volume, area;

    printf("Informe o raio da esfera: ");
    scanf("%f", &raio);

    volume = (4.0/3) * PI * pow(raio,3);
    area = 4 * PI * raio * raio;

    printf("A area da superficie da esfera e: %.2f\n", area);
    printf("O volume da esfera e: %.2f\n", volume);

    return 0;
}