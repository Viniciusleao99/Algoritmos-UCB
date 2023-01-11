/* Faça um programa que mostre ao usuário um menu com quatro opções de operações matemáticas (as operações básicas, por exemplo).
O usuário escolhe uma das opções, e o seu programa pede dois valores numéricos e realiza a operação, mostrando o resultado. */

#include<stdio.h>
#include<math.h>
int main(){
    char operador;
    float n1, n2, resultado;

    printf("Escolha qual operacao deseja fazer");
    scanf("%c", &operador);
    printf("Digite dois valores:");
    scanf("%f%f", &n1,&n2);
    
    switch(operador){
        case '+': 
            resultado = n1 + n2;
            printf("Soma: %.2f", resultado);
        break;
        case '-':
            resultado = n1 - n2;
            printf("Subtracao: %,2f", resultado);
        break;
        case '*':
            resultado = n1 * n2;
            printf("Multiplicacao: %.2f", resultado);
        break;
        case '/':
            resultado = n1 / n2;
            printf("Divisao: %.2f", resultado);
        break;
        case '^':
            resultado = pow(n1,n2);
            printf("Potencia: %.2f", resultado);
        break;
        case 'r':
            resultado = sqrtl(n1);
            printf("Raiz quadrada: %.2f", resultado);
        break;
    default: printf("Operador invalido!");}
return 0;}