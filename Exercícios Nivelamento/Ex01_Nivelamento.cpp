#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

float CustoMecadoria, CustoFrete, CustoDespesas, ValorFinal, ValorVenda, lucro;

printf("Digite o cuto da mercadoria:");
scanf("%f", &CustoMecadoria);
printf("Digite o custo do frete:");
scanf("%f", &CustoFrete);
printf("Digite o custo de despesas eventuais:");
scanf("%f", &CustoDespesas);

ValorFinal = CustoMecadoria + CustoFrete + CustoDespesas;

printf("O valor final do produto fica: %f", ValorFinal);

printf("Digite o valor de venda:");
scanf("%f", ValorVenda);

lucro = ValorVenda - ValorFinal;

printf("Logo o valor do lucro foi de %f", lucro);
return 0;}
