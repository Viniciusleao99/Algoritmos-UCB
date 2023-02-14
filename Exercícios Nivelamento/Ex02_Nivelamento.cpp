#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<math.h>
#define PI 3.14

int main(){
	float raio, area;
//	float PI = 3.14;
	
	
	printf("Qual o raio do circulo?");
	scanf("%f", &raio);
	
	area = PI * (pow (raio, 2));
	
	printf("O valor da area e: %f", area);

return 0;}
