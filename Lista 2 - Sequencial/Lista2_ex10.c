/* Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, 
mostrando 4 casas decimais após a vírgula */

#include <stdio.h>
#include <math.h>
int main(){
    int x1,y1,y2,x2,p1,p2;
    float D;
    printf("Digite quatro numeros:");
    scanf("%i%i%i%i", &x1,&x2,&y1,&y2);
    p1 = (x1 - x2) ^ 2;
    p2 = (y1 - y2) ^ 2;
    D = (p1 + p2) * 1/2;
    printf("A distancia entre os pontos fornecidos e: %.4f", D);
return 0;}
