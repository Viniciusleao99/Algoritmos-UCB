/*Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o 
valor do frete e despesas eventuais (também solicitadas pelo teclado).Para concluir, o programa pergunta qual o valor 
de venda e indica a percentagem de lucro da mercadoria.*/

#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

float CustoMecadoria, CustoFrete, CustoDespesas, ValorFinal, ValorVenda, lucro, PorcentagemLucro;

printf("Digite o cuto da mercadoria:");
scanf("%f", &CustoMecadoria);
printf("Digite o custo do frete:");
scanf("%f", &CustoFrete);
printf("Digite o custo de despesas eventuais:");
scanf("%f", &CustoDespesas);

ValorFinal = CustoMecadoria + CustoFrete + CustoDespesas;

printf("Digite o valor de venda:");
scanf("%f", &ValorVenda);

lucro = ValorVenda - ValorFinal;
PorcentagemLucro = lucro / 100;

printf("Logo o valor do lucro foi de %.2f%", PorcentagemLucro);
return 0;}
