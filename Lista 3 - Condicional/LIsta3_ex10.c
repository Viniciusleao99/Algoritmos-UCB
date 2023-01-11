/* Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
seguintes médias de acordo com um valor numérico digitado pelo usuário e mostrado na tabela a seguir: */ 

 #include <stdio.h>
 int main(){
    int n1, n2, n3, op, cal;
    printf("Digite tres numeros inteiros:");
    scanf("%i%i%i", &n1, &n2, &n3);
    printf("Escolha qual operacao deseja realizar:\n");
    printf("Digite 1 para media Geometrica\n");
    printf("Digite 2 para media pomderada\n");
    printf("Digite 3 para media harmonica\n");
    printf("Digite 4 para media aritmetica\n");
    scanf("%i", &op);
if (op == 1)
    cal = n1 * n2 * n3;
    printf("Resultado: %i", cal);
        else if (op == 2)
        cal = (n1 + 2 * n2 + 3 * n3) / 6;
        printf("Resultado: %i", cal);
            else if(op == 3)
            cal = 1 / (1/n1 + 1/n2 + 1/n3);
            printf("Resultado: %i", cal);
                else if(op == 4)
                cal = n1 + n2 + n3 / 3;
                printf("Resultado: %i", cal);
else {printf("Operacao invalida!");}
return 0;} 