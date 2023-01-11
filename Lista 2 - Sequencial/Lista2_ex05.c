/* Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma
de A e B atribuindo o seu resultado na variável X. Imprima o resultado da seguinte
forma “valor de A” + “valor de B” = “valor de X”. Faça o exercício realizando o calculo dentro do printf */

#include <stdio.h>
 int main(){
    int n1, n2, x;
    printf("Digite dois numeros");
    scanf("%i%i", &n1, &n2);
    printf("%i + %i ==  %i", n1, n2, n1 + n2);
return 0;} 