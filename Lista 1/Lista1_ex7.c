/*Escreva um programa que leia o nome do funcionário, o sexo (F ou M), o número de matrícula do funcionário, o número de horas 
trabalhadas, o valor que recebe por hora e calcule o salário desse funcionário. A seguir, mostre todos os dados na tela, os dados
de entrada e os dados de saída.*/

#include <stdio.h>
#include<string.h>
int main (){
	char n[30], s[10], m[4];
    float h, v, salario;
    printf("Qual o seu nome?\n");
    scanf("%s", &n);
    printf("Qual o seu sexo?\n");
    scanf("%s", &s);
    printf("Qual sua matricula?\n");
    scanf("%s", &m);
    printf("Quantas horas voce trabalha por dia?\n");
    scanf("%f", &h);
    printf("Qual o valor da sua hora de trabalho?\n");
    scanf("%f", &v);
    salario = h * v;
    printf("Diante do informado, conclui-se que seu salario correspondente a (%.2f) horas de trabalho e de: %.2f reais", h, salario);
return 0;}