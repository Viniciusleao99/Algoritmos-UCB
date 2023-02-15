/*Faça um programa que calcule a quantidade necessária de latas de tinta para pintar uma parede
O programa pergunta as medidas de largura e altura da parede em metros e escreve quantas latas
tinta serão necessárias para pintá-la. Considere que o consumo de tinta é de 300 ml por metro
quadrado e a quantidade de tinta por lata é de 2 litros.*/

#include<stdio.h>
int main(){
    float largura, altura, area, ConsulmoTinta, latas;

    printf("Qual a largura da parede?");
    scanf("%f", &largura);
    printf("Qual a altura da parede?");
    scanf("%f", &altura);
    
    area = largura * altura;
    ConsulmoTinta = area * 300;
    latas = ConsulmoTinta / 2;

    printf("A quantidade de latas a ser usado e de: %.2f", latas);
return 0;}