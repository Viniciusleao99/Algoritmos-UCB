/* Faça um programa que leia os coeficientes de uma equação do segundo grau. Em seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são
calculadas como em que ∆ = b² – 4 * a * c e ax²+ bx + c = 0 representa uma equação do segundo grau. A variável a tem de ser diferente de zero. Caso seja igual, 
imprima a mensagem “Não é equação de segundo grau”. Do contrário, imprima:
• Se ∆ < 0, não existe real. Imprima a mensagem “Não existe raiz”.
• Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
• Se ∆ > 0, existem duas raízes reais. Imprima as raízes */

#include<stdio.h>
#include<math.h>
int main(){
    
    float a, b, c, r1, r2, delta;

    printf("Digite o valor do termo a: ");
    scanf("%f", &a);
    printf("Digite o valor do termo b: ");
    scanf("%f", &b);
    printf("Digite o valor do termo c: ");
    scanf("%f", &c);
 
    delta = pow(b, 2) - 4 * a * c;
    r1 = (-b + sqrt(delta)) / (2*a);
    r2 = (-b - sqrt(delta)) / (2*a);
    printf("%f", r1);

if (delta < 0)
    printf("Nao existe raiz\n");
        else if (delta == 0)
        printf("Raiz unica\n");
else{
printf("O valor da primira raiz e %.2f, e da segunda rais e %.2f", r1, r2);}
return 0;}