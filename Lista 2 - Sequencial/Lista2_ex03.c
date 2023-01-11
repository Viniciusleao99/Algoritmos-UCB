/*Faça um algoritmo que leia um numero inteiro, dois números reais (um float e um
double), um caracter (uma única letra), uma string (conjunto de caracteres) e um
booleano. Na sequência, imprima todos com a formatação abaixo.
Numero inteiro: “valor”
Numeros reais:
“valor”
“valor”
Letra: “valor”
String: “valor”
Logico: “valor” */

#include <stdio.h>
int main(){
    int i;
    float f, d;
    char c, s[30];
    bool b;

    printf("Digite um numero inteiro");
    scanf("%i", &i);
    printf("Digite doi numeros reais");
    scanf("%f%f", &f, &d);
    printf("Digite apenas um caracter");
    scanf("%c", &c);
    printf("Digite um conjunto de caracteres");
   
    
return 0;}