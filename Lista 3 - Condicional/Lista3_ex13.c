/* Faça um programa que informe o mês de acordo com o número digitado pelo usuário.
Exemplo: Entrada = 4. Saída = Abril. Use switch. */

#include<stdio.h>
int main(){
    int n;
    printf("Digite um numero entre 1 e 12:");
    scanf("%i", &n);
    
    switch(n){
        case 1: printf("%i equivale ao mes de Janeiro", n); break;
        case 2: printf("%i equivale ao mes de Fevereiro", n); break;
        case 3: printf("%i equivale ao mes de Marco", n);break;
        case 4: printf("%i equivale ao mes de Abril", n); break;
        case 5: printf("%i equivale ao mes de Maio", n); break;
        case 6: printf("%i equivale ao mes de Junho", n); break;
        case 7: printf("%i equivale ao mes de Julho", n); break;
        case 8: printf("%i equivale ao mes de Agosto", n); break;
        case 9: printf("%i equivale ao mes de Setembro", n); break;
        case 10: printf("%i equivale ao mes de Outubro", n); break;
        case 11: printf("%i equivale ao mes de Novembro", n); break;
        case 12: printf("%i equivale ao mes de Dezembro", n); break;
    default: printf("Data invalida!");}
return 0;}