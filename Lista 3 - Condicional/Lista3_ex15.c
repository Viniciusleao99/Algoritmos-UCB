/* Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a
qual cidade pertence, considerando só os seguintes valores:
61 - Brasília
71 - Salvador
11 - São Paulo
21 - Rio de Janeiro
32 - Juiz de Fora
19 - Campinas
27 - Vitória
31 - Belo Horizonte
qualquer outro - uma cidade no Brasil sem identificaçã */

#include<stdio.h>
int main(){
    int ddd;
    printf("Digite o DDD desejado:");
    scanf("%i", &ddd);

    switch(ddd){
        case 61: printf("Brasilia");break;
        case 71: printf("Salvador");break;
        case 11: printf("Sao Paulo");break;
        case 21: printf("Rio de Janeiro");break;
        case 32: printf("Juizde Fora");break;
        case 19: printf("Campinas");break;
        case 27: printf("Vitoria");break;
        case 31: printf("Belo Horizonte");break;
    default: printf("DDD invalido");break;}
return 0;}