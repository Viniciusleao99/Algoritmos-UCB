//construa um algotimo que a partir da leitura de dois numeros inteiros forneça o resto e o quociente da divisao do primeiro pelo segundo

#include<stdio.h>
int main(){
    int n1, n2, quociente, resto;
    printf("Digite o valor do numero 1: ");
    scanf("%d", &n1);
    printf("Digite o valor do numero 2: ");
    scanf("%d", &n2);
    quociente = n1 / n2;
    resto = n1 % n2;
    printf("Quociente: %d\nResto: %d", quociente, resto);
return 0;}
