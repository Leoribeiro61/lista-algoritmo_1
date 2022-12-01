#include <stdio.h>
#include <string.h>


int main(){

	int valor, booleano;
	float num1, num2;
	char letra , str[20];

	printf("Digite um numero inteiro: \n");
	scanf("%d", &valor);

	printf("Digite dois numeros reais: \n");
	scanf("%f%f", &num1, &num2);
	fflush(stdin);

	printf("Digite uma letra: \n");
	scanf("%c", &letra);
	fflush(stdin);

	printf("Digite uma string: \n");
	scanf("%s", &str);
	fflush(stdin);

	printf("Digite apenas os valores 0 ou 1: \n");
	scanf("%d", &booleano);

	printf("Numero inteiro: %d \n " , valor);
	printf("Numeros reais: %.2f \n %.2f \n", num1 , num2);
	printf("Letra: %c \n", letra);
	printf("String: %s \n", str);
	printf("Booleano: %d", booleano);

	
}
