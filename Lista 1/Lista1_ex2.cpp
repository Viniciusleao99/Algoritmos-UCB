//Construa um algoritmo que calcule a área de um círculo cujo raio é fornecido pelo usuário (use área= 3.14 x raio2)

#include<stdio.h>
int main(){
	float raio, area;
    printf("Digite o raio do circulo:");
    scanf("%f", &raio);
    area = raio * raio * 3.14;
    printf("A area do circulo e: %.2f\n", area);
return 0;}
<<<<<<< HEAD

/* 
#include<stdio.h>
#include<math.h> //BIBLIOTECA MATEMATICA
#define PI 3.1 //CONSTANTE
int main(){
//calcular a area do circulo -> area = 3.14159 * raio²
    float area, raio;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    area = PI * pow(raio,2); //POW FUNÇÃO MATEMÁTICA DA BIBLIOTECA MATH.H
    printf("Area: %f", area);} 
*/
=======
>>>>>>> e0761309408368350005868067f1460975338f58
