/* Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha
15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas decimais. */

#include <stdio.h>
int main(){
    float sf, tv, x;
    printf("Digite o seu salario fixo: R$");
    scanf("%f", &sf);
    printf("Digite o valor total de vendas efetuadas por voce neste ultimo mes: R$");
    scanf("%f",&tv);
    x = sf + (tv * 15) / 100;
    printf("Conforme seu desempenho, voce ira receber: R$ %.2f, este mes", x);
return 0;}
