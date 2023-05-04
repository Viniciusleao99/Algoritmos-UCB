/*Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula*/

#include <stdio.h>

int main() {
    float x1, y1, x2, y2, distancia;

    printf("Digite o valor de x1: ");
    scanf("%f", &x1);

    printf("Digite o valor de y1: ");
    scanf("%f", &y1);

    printf("Digite o valor de x2: ");
    scanf("%f", &x2);

    printf("Digite o valor de y2: ");
    scanf("%f", &y2);

    distancia = pow((x2 - x1), 2) + pow((y2 - y1),2);

    printf("Distancia = %.4f", distancia);
return 0;}