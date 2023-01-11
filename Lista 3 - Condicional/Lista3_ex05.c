/* Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre: o número digitado ao quadrado e raiz 
quadrada do número digitado */

#include <stdio.h>
#include<math.h>
int main(){
    int n, q, r;
    printf("Digite um numero:");
    scanf("%i", &n);
if (n % 2 == 0){
    q = pow (n, 2);
    r = sqrt (n);
    printf("O quadro desse numero e %i e sua raiz e %i", q,r);}
    else printf("Nao foi possivel calcular");
return 0;}
