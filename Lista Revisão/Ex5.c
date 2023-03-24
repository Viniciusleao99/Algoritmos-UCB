/*Elabore um algoritmo em C, que faça a contagem progressiva e regressiva no mesmo laço de 
FOR de números no intervalo de 5 a 10.*/

#include<stdio.h>
#include<string.h>

int main(){
int i;

for(i=10;i>=5;i--)
 printf("%i _", i);
    for(i=0;i<=10;i++)
    printf("%i _", i);
return 0;}