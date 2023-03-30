//Programa que calcule a média de 5 notas de um aluno. 

#include<stdio.h>
int main(){
    float notas[5]={0}, media=0, total=0;
    int i;

    printf("Digite as 5 notas do aluno:\n");
    
    for(i=0;i<5;i++)
    scanf("%f", &notas[i]);

    for(i=0;i<5;i++)
    total += notas[i];

    media = total / 5;

    printf("A media do aluno foi: %.2f", media);

return 0;}