/*Fazer um algoritmo para auxiliar um construtor a descobrir a quantidade de rolos e a quantidade de metros avulsos de fios que ele 
precisa adquirir. Sabe-se que o construtor tem a quantidade total de fios em metros a serem utilizados na instalação elétrica da obra 
e que cada rolo de fio tem 50 metros.*/

//m=quantidade total de fios em metros, qr=quatidade de rolos, qma=quantidade de metros avulsos

#include <stdio.h>
int main(){
    int m, qr, qma;
    printf("Digite a quantidade total de fios em metros a serem utilizados");
    scanf("%i", &m);
    qr = m / 50;
    qma = m % 50;
    printf("A quantidade de rolos a serem utilizados sera: %i\nE a quantidade de metros avulsos sera: %i", qr, qma);
return 0;}