/*Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas do chamado triângulo de Floyd:
1
2 3
4 5 6
8 9 10
11 12 13 14 15
16 17 18 19 20 21 */

#include <stdio.h>
#include <math.h>
int main(){

int n1, l, c, n=0;

printf("Digite quantas linhas quer ver:");
scanf("%d", &n1);

for(l=1 ; l<= n1; l++){
     for (c=1; c<= l; c++){
        n++;
        printf("%d ", n);
     }
     printf("\n");}
return 0;}