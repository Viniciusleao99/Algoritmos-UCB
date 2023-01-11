/* Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas 
(em que “h” corresponde à altura): ◦ Homens: (72,7 * h) – 58           ◦ Mulheres: (62,1 * h) – 44,7 */
                                    
#include <stdio.h>
int main(){
    float altura, homem, mulher;
    char sexo;
    
    printf("Me informe o seu sexo e sua altura respectivamente, por gentileza!\n");
    scanf("%c%f", &sexo, &altura);
    
if(sexo == 'm' || sexo == 'M'){
        homem = 72.7 * altura - 58;
        printf("O seu peso ideal e: %.1f", homem);
}else{
        mulher = 62.1 * altura - 44.7;
        printf("O seu peso ideal e: %.1f", mulher);}   
return 0;}
