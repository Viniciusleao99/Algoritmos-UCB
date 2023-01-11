/*O usuario informa seu nome, sobrenome e numero do cpf. A partir destes dados é composta sua senha de acesso, formada pelo nome, primeira letra do sobrenome e os 3 primeiros
números do cpf. Elabore um algoritmo que gere e imprima a senha.*/

#include <stdio.h>
#include <string.h>

int main(){
char nome[30], sobre[30], cpf[30];
int i;

gets(nome);
gets(sobre);
gets(cpf);

printf("%s%c", nome, sobre[0]);
for(i = 0; i < 3; ++i)
    printf("%c", cpf[i]);
return 0;}