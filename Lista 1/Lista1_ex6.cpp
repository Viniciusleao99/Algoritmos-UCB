/*Leia 2 valores A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 
e a nota B tem peso 7.5 (A soma dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0.*/

#include <stdio.h>
int main(){
    float n1, n2, media;
    printf("Digite a primeira nota entre 0 e 10:");
    scanf("%f", &n1);
    printf("Digite a segunda nota entre 0 e 10:");
    scanf("%f", &n2);
    media = ((n1*3.5 + n2*7.5))/11;
    printf("A media do aluno sera: %.2f", media);
return 0;}
