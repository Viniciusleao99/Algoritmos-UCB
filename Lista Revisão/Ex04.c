/*Elabore um algoritmo em C, utilizando a estrutrua condicional Switch – Case, que apresenta as
compras de frutas efetuadas por usuário, sendo elas identificadas por meio de um número. 
1 => ABACAXI 2 => MAÇA 3 => PERA.*/

#include<stdio.h>
#include<string.h>

int main(){
    int opcao;
    printf("Escolha uma opcao: 1,2 ou 3\n");
    scanf("%i", &opcao);

    switch(opcao){

    case 1:
    printf("Abacaxi");
    break;

    case 2:
    printf("Maca");
    break;

    case 3:
    printf("Pera");
    break;
}
return 0;}