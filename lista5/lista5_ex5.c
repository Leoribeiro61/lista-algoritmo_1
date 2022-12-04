#include <stdio.h>
#include <string.h>

int main (){

	char nome[50],sobrenome[50], cpf[11],backup[20],backup2[20];
	
	printf("Digite seu nome: \n");
	gets(nome);
	
	printf("Digite seu sobrenome: \n");
	gets(sobrenome);
	
	printf("Digite seu CPF (apenas os numeros): \n");
	gets(cpf);
	
	strncpy(backup,sobrenome,1);
	strncpy(backup2,cpf,3);
	
	printf("Sua senha e: %s%s%s",nome,backup,backup2);
}