//Faça um progra qu leia dois numeros e diga qual é maior

#include <stdio.h>
int main(){
    int n1,n2;
    printf("Digite dois numeros:");
    scanf("%i%i", &n1, &n2);
if (n1 > n2){
    printf("O numero (%i) e maior que o numero (%i)", n1, n2);}
else {
    printf("O numero (%i) e maior que o numero (%i)", n2, n1);}
return 0;}
