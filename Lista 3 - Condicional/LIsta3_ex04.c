/* Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação, for maior que 20% do salário, 
imprima: “Empréstimo não concedido.”, caso contrário, imprima: “Empréstimo concedido.” */

#include <stdio.h>
int main(){
    float s,e;
    printf("Digite o seu salario: R$");
    scanf("%f", &s);
    printf("Digite o valor da prestacao do seu emprestimo: R$");
    scanf("%f",&e);
if (e > (s * 20 / 100)){
    printf("Emprestimo nao concedido");}
else {
    printf("Emprestiom concedido");}
return 0;}
