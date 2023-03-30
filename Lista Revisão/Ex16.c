/*Faça um programa que entra com a idade de uma pessoa e se idade maior que 70 anos, aparece a 
mensagem "Novos 50". Se idade maior que 21 anos, Adulto. Se idade menor que 21 anos, Jovem. */

#include<stdio.h>
int main(){
    int idade;

    printf("Digite sua idade\n");
    scanf("%i", &idade);

    if(idade <= 21)
    printf("Jovem");
       else if(idade >= 70)
        printf("Novos 50");
            else printf("Adulto"); 
return 0;}