#include<stdio.h>
#include<math.h> // biblioteca matematica
#define PI 3.14159 // constante 
int main(){
//calcular a area do circulo -> area = 3.14159 * raio²
    float area, raio;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    area = PI * pow(raio,2); //Pow função matematica da biblioteca math.h
    printf("Area: %f", area); 
}

 




//outra forma de fazer 
#include <stdio.h> 
// area = 3.14 * (R*R) 

int main (){
	float R , area;
	float pi = 3.14; 
	printf("digite o valor do raio:\n");
	scanf("%f" , &R); 
	area = pi * (R*R); 
	printf ("area do circulo: %f \n", area );
