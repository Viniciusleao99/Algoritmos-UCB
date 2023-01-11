#include <stdio.h>
#include<math.h>
int main(){
    int iniciar, repetir, m, a, p, soma1;

    printf("ABACAXI  5,00 a unidade \n2 MAcA  1,00 a unidade \n3 PERA  4,00 a unidade");
    printf("\nDeseja iniciar compra? 1p/sim 2 p/ nao");
    scanf("%d", &iniciar);


    while( iniciar ==1){
    printf("Quantas macas voce quer?");
    scanf("%d", &m);
    printf("Quantas peras voce quer?");
    scanf("%d", &p);
    printf("Quantos abacaxi voce quer?");
    scanf("%d", &a);
    
    printf("\nDeseja repetir?1p/sim 2 p/ nao");
    scanf("%d", &repetir);

    if(repetir==1){

     printf("Quantas macas voce quer?");
    scanf("%d", &m);
    printf("Quantas peras voce quer?");
    scanf("%d", &p);
    printf("Quantos abacaxi voce quer?");
    scanf("%d", &a);
    
    printf("Deseja repetir?1p/sim 2 p/ nao");
    scanf("%d", &repetir);}
    
    if(repetir==2){
        soma1= 1*m + 5*a+ 4*p;
        printf("o valor e %d\n", soma1);break;}
    
    } 

}