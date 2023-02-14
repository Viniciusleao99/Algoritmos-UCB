#include<stdio.h>
#include <math.h>
#include <locale.h>


int main(){

setlocale(LC_ALL,"portuguese");

    char op, nome[50], NomeObra[50];
    int a, b, x, hip, seno, ano, MesInicio, MesFim, codigo, tempo;
	
    printf("Algotitmos e Programacao, Joyce Siqueira, Vinicius Arantes Leao, UC22200223, https://github.com/ViniLion99/Algoritmos-UCB1.git, DevC++ \n");
    printf ("Escolha uma das opcoes: A ou B ou C:");
    scanf("%c", &op);

    switch (op){
    	
    case 'A': 
		
	printf("Digite dois valores:");
	scanf("%i%i", &a, &b);
	x = pow(a, 2) + pow(b, 2);
	hip = sqrt(x);
	seno = a / hip;
	printf("A hipotenusa vale %.3i e o seno vale %.3i", hip, seno);break;
		
    case 'B':
    	
	printf("Digite o seu nome:");
	scanf("%s", &nome);
	printf("Digite o seu ano de nascimento:");
	scanf("%i", &ano);
	
	if (ano >= 1900 && ano <= 2022 && ano % 4 == 0 && ano % 100 > 0)
	printf("%s, %i e um ano bissexto", nome, ano);
		else if	(ano >= 1900 && ano <= 2022 && ano % 4 == 0 && ano % 100 == 0 && ano % 400 == 0)
		printf("%s, %i e um ano bissexto", nome, ano);
			else if (ano < 1900 || ano > 2022)
			printf("Ano invalido!");
	else printf ("%s,%i nao e um ano bissexto", nome, ano);break; 
	
	case 'C':
		
	printf("Digite o nome da obra:\n");
	scanf("%s", &NomeObra);
	printf("Digite o mes de inicio da obra:\n");
	scanf("%i", &MesInicio);
	printf("Digite o mes de termino da obra:\n");
	scanf("%i", &MesFim);
	printf("Digite o cógido de situação da obra:\n");
	scanf("%i", &codigo);
	
	tempo = MesFim - MesInicio;
	
	switch (codigo){
		case 1: printf("Nome da obra: %s\n", NomeObra);
				printf("Obra Concluída\n"); 
				printf("Tempo de execucao: %i\n", tempo);break;
		case 2:	printf("Nome da obra: %s\n", NomeObra);
				printf("Problemas no projeto\n");
				printf("Tempo de execucao: %i\n", tempo);break;
		case 3: printf("Nome da obra: %s\n", NomeObra);
				printf("Atraso nos repasses financeiros\n");
				printf("Tempo de execucao: %i\n", tempo);break;
		case 4: printf("Nome da obra: %s\n", NomeObra);
				printf("Greve dos trabalhadores\n"); 
				printf("Tempo de execucao: %i\n", tempo);break;
		case 5: printf("Nome da obra: %s\n", NomeObra);
				printf("Falta de materiais\n"); 
				printf("Tempo de execucao: %i\n", tempo);break;
		case 6: printf("Nome da obra: %s\n", NomeObra);
				printf("Falta de materiais\n"); 
				printf("Tempo de execucao: %i\n", tempo);break;
		default: printf("Opcao invalida");}
	
	default: printf("Opcao invalida");}
	
return 0;}
