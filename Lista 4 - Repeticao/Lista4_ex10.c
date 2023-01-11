/*Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.*/

#include <stdio.h>
int main (){
    int i =0, num , media, soma;

    while (i <=9){
    printf("Digite o numero %d:", i +1);
    scanf("%d", &num);
  if ( num >= 0){
     soma += num;
  media = soma/2 ;}
  i++;}
printf("\n a media e: %d", media);
return 0;}