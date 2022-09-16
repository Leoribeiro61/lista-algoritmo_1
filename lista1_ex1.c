// 1)construa um algoritmo que leia um numero inteiro de horas e mostra 
//ao usuario o correspondente em minutos e segundos 

#include<stdio.h> // biblioteca para os comandos printf e scanf
int main(){ //inicio do algoritmo
    int horas, minutos, segundos; 
    printf ("Digite a quantidade de horas:");
    scanf("%d", &horas);
    minutos = horas * 60; 
    segundos = minutos * 60;
    printf("minutos: %d \n", minutos); //  \n quebra de linha 
    printf("segundos: %d ", segundos);
 

}// fim do algoritmo 