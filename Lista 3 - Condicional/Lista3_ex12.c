#include<stdio.h>

int main() {
    float n1, n2, n3, op, cal;

    printf("Digite tres numeros inteiros: ");
    scanf("%f%f%f", &n1, &n2, &n3);

    printf("Operacoes\n");
    printf("1 - Geometrica\n");
    printf("2 - Ponderada\n");
    printf("3 - Harmonica\n");
    printf("4 - Aritmetica\n");
    printf("Digite qual operacao quer fazer: ");
    scanf("%f", &op);

    if (op == 1){
        cal = n1 * n2 * n3;
        printf("Resultado: %.2f", cal);}
            else if (op == 2){
            cal = ((n1+2) * (n2+3) * n3) / 6;
            printf("Resultado: %.2f", cal);}
                else if (op == 3){
                cal = ((1/n1)+(1/n2)+(1/n3)) / 1;
                printf("Resultado: %.2f", cal);}
                    else if (op == 4){
                    cal = (n1 + n2 + n3) / 3;
                    printf("Resultado: %.2f", cal);}
return 0;}