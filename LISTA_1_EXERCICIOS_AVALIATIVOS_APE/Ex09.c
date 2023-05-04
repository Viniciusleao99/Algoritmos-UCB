/*Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim,
apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo
deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade
de frutas. Ao final, apresente o valor total da compra.
1 => ABACAXI – 5,00 a unidade
2 => MAÇA – 1,00 a unidade
3 => PERA – 4,00 a unidade */

#include<stdio.h>

#define PrecoAbacaxi = 5
#define PrecoMaca = 1
#define PrecoPera = 4


int main(){

    int Quantidade_Abacaxi = 0,Quantidade_Maca = 0, Quantidade_Pera = 0, total = 0;
    char continuar;

    printf("Quantos abacaxis deseja levar?");
    scanf("%i", &Quantidade_Abacaxi);
    printf("Quantas macas deseja levar?");
    scanf("%i", &Quantidade_Maca);
    printf("Quantas peras deseja levar?");
    scanf("%i", &Quantidade_Pera);
    printf("Deseja rever o menu?");
    scanf(" %c", continuar);
    do{        

        printf("ABACAXI 5,00 a unidade\n");
        printf("MACA 1,00 a unidade\n");
        printf("PERA 4,00 a unidade\n");
    }while(continuar=='S' || continuar=='s');

    total = (Quantidade_Abacaxi * PrecoAbacaxi) + (Quantidade_Maca * PrecoMaca) + (Quantidade_Pera + PrecoPera);

    printf("Sua comora deu RS%.2i", total);

    return 0;}