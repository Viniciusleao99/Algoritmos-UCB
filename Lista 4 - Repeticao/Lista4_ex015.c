//Apresente um programa que calcule o valor de qualquer Hn. Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série harmônica.

#include<stdio.h>
int main(){
    int n, i;
    double Hn = 0;

    scanf("%i", &n);

    for(i=1; i<=n; i++)
        Hn += 1.0/i; 
    
    printf("Hn: %lf", Hn);
return 0;
}