/* Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o
usuário entre com o valor e o estado de destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. 
Se o estado digitado não for válido, mostrará uma mensagem de erro.
 ESTADO e IMPOSTO  MG 7%  SP 12%  RJ 15%  MS 7% */

#include <stdio.h>
int main(){
    float valor, valorf;
    char estado[20];
    printf("Digite a sigla do estado de destino:");
    scanf("%s", &estado);
    printf("Digite o valor do produto: R$");
    scanf("%f", &valor);
if(estado == 'MG' || estado == 'mg' || estado == 'Mg'){
    valorf = valor * 0.07;
    printf("O valor final do produto e: R$%f", valorf);
        else if(estado == 'SP'|| estado == 'sp' || estado == 'Sp')
        valorf = valor * 0.12;
        printf("O valor final do produto e: R$%f", valorf);
            else if(estado == 'RJ' || estado == 'rj' || estado == 'Rj')
            valorf = valor * 0.15;
            printf("O valor final do produto e: R$%f", valorf);
                else if(estado == 'MS' || estado == 'ms' || estado == 'Ms')
                valorf = valor * 0.07;
                printf("O valor final do produto e: R$%f", valorf);}
 else {printf("Erro");}
return 0;}

/*
int main(){
    float valor, valorf;
    char estado[20];
    printf("Digite a sigla do estado de destino:");
    scanf("%s", &estado);
    printf("Digite o valor do produto: R$");
    scanf("%f", &valor);
if(estado == 'MG' || estado == 'mg' || estado == 'Mg'){
    valorf = valor * 0.07;
    printf("O valor final do produto e: R$%f", valorf);}
if(estado == 'SP'|| estado == 'sp'){
    valorf = valor * 0.12;
    printf("O valor final do produto e: R$%f", valorf);}
if(estado == 'RJ' || estado == 'rj' || estado == 'Rj'){
    valorf = valor * 0.15;
    printf("O valor final do produto e: R$%f", valorf);}
if(estado == 'MS' || estado == 'ms' || estado == 'Ms'){
    valorf = valor * 0.07;
    printf("O valor final do produto e: R$%f", valorf);}
else {printf("Erro");}
return 0;}
*/