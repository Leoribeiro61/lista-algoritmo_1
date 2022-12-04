#include <stdio.h>
#include <string.h>

int main (){

	char nome[70];
	int retorno;
	
	printf("Digite seu nome completo: \n");
	fgets(nome,40,stdin);
	printf("O nome tem %d caracteres",strlen(nome)-1);

}