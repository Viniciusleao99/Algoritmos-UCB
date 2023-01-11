/*Elabore um algoritmo que receba o primeiro nome, o(s) nome(s) do meio, e o ultimo nome do usuário. Concatene os dados e imprima o valor final.*/

#include <stdio.h>
#include <string.h>

int main(){
char nome[30], sobre[30],ult[30];
gets(nome);
gets(sobre);
gets(ult);

strcat(nome,sobre);
strcat(nome,ult);

printf("%s", nome);

return 0;}