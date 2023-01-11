//Elabora um algoritmo que valide o nome de um cor, ou seja, o usuário poderá digitar apenas branco, verde e amarelo.

#include<stdio.h>
int main(){
    int cor;
    printf("Digite uma cor, por favor!");
    scanf("%i", &cor);
    if (cor == "amarelo" || cor == "verde" || cor == "branco"){
    printf("Cor valida!");}
    else{
    printf("Cor invalida!");}
return 0;}