/* Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
INFANTIL A - 5
INFANTIL B - 10
JUVENIL A - 13
JUVENIL B - 17
SENIOR - ACIMA DE 18 */

#include <stdio.h>
int main (){
    int idade;
    printf("Digite a sua idade:");
    scanf("%i", &idade);

if (idade >=5 && idade <=7)
    printf("INFANTIL A");
    else if(idade >=8 && idade <=10)
        printf("INFANTIL B");
        else if(idade >=11 && idade <=13)
            printf("JUVENIL A");
            else if(idade >=14 && idade <=17)
                printf("JUVENIL B");
                else printf("SENIOR");
return 0;}