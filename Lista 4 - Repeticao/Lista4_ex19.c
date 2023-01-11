#include<stdio.h>
int main(){
	int n = -1;
	float soma = 0, i;
	for (i = 1.0; i <= 55.0; i++){
    	n += 2;
    	soma += (n / i);
	}
	printf("%f", soma);	
}
