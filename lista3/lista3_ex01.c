//1 faça um programa que leia dois números e mostre qual deles é o maior 

#include <stdio.h>
int main(){

    int n1 , n2 ; 

    printf("Digite o numero 1: \n");
    scanf("%d", &n1); 
    printf("Digite o numero 2: \n"); 
    scanf("%d", &n2);

    if (n1 > n2){
        printf("numero 1 e maior \n");
    } else { 
        printf("numero 2 e maior "); 
    }
}
