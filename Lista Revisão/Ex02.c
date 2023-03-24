/*Elabore um algoritmo em C, o qual o usuário informe nome e preço de um produto, o algoritmo 
calcule um ajuste no preço de 15% e exiba o produto e preço após o ajuste.*/

#include<stdio.h>
#include<string.h>

int main(){
    float preco, PrecoFinal;
    char nome[50];

    printf("Digite o nome do produto:\n");
    fgets(nome, 50, stdin);
    fflush(stdin);
    printf("Digite o valor do produto:\n");
    scanf("%f", &preco);

    PrecoFinal = preco + preco * 0.15; 

    printf("O seu produto e o %s\n E o valor final e de %.2f", nome, PrecoFinal);
    return 0;}