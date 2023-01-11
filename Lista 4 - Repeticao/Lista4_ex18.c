

#include<stdio.h>
int main(){

 int n, i, resultado = 0;
 
 scanf("%d", &n);
 
 for (i = 1; i <= n; i++) {
    if (n % i == 0) {
       resultado++;
    }
 }
 
 if (resultado == 2)
    printf("%d - primo\n", n);
 else
    printf("%d - nao primo\n", n);
 

}
	


    #include<stdio.h>
#include<math.h>
int main (){
    int i= 2,n1;

    printf("Digite um numero:");
    scanf("%d", &n1);
while(i<n1){
    if(n1 %i==0){
        printf("nao e primo");break;
    }
    else printf("e primo");break;
}
}
