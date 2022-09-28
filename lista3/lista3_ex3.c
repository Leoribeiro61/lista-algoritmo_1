/*3. Faça um programa que leia um número inteiro e verifique se esse número é par ou
ímpar.*/

#include <stdio.h>
int main(){
    int numero;
    
    printf ("Digite um numero: \n");
    scanf("%d" , &numero);

    if (numero % 2 ==0) {
        printf("esse numero e par! \n");
    }
    else { 
        printf("esse numero e impar!");
    }
}

