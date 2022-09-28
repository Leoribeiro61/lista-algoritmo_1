/*5. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre: o
número digitado ao quadrado e raiz quadrada do número digitado.*/ 

#include <stdio.h> 
#include <math.h>

int main(){
    int num , quadrado ;
	float raiz; 

    printf("Digite um numero: \n");
    scanf("%d", &num); 
    
    quadrado = (num*num);
    raiz = sqrt(num);

    if (num > 0 ){
        
        printf("Quadrado: %d \n", quadrado);
        printf("Raiz: %.2f", raiz);
    }
    else {
        printf("Nao e possivel calcular");
    }
}