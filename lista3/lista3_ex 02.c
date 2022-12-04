/*2. Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois
números forem iguais, imprima a mensagem “Números iguais”*/

#include <stdio.h>
int main(){
    int num1, num2;

    printf("Digite o numero 1: \n");
    scanf("%d", &num1);
    printf("Digite o numero 2: \n");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("o numero 1 e maior \n");
    } 
    else if (num1 < num2) {
        printf("o numero 2 e maior");
    }
    else {
        printf("Os dois numeros sao iguais ");
    }
}

