/*Faça um algoritmo que leia um número positivo e imprima seus divisores.Exemplo: Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.*/

#include<stdio.h>
#include<math.h>
int main (){
    int n1, i = 1;

printf("Digite um numero:");
scanf("%d", &n1);

while (i<= n1){
if (n1 %i ==0){
    printf("%d ", i);}
    i++;}
return 0;}