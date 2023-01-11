//Construa um algoritmo que calcule a média aritmética de 3 números quaisquer fornecidos pelo usuário.

#include <stdio.h>
int main(){
	float n1,n2,n3,media;
	printf("Digite um numero:");
	scanf("%f",&n1);
	printf("Digite outro numero");
	scanf("%f",&n2);
	printf("Digite outro numero");
	scanf("%f",&n3);
	media = (n1+n2+n3)/3;
	printf("A media aritmetica dos tres numeros fomrnecidos e:");
	printf("%.2f", media);
return 0;}
