#include <stdio.h>
#include <string.h>

int main (){

	char nome[50],sobrenome[50];
	
	printf("Digite seu nome: \n");
	gets (nome);
	
	printf ("Digite seu sobrenome: \n");
	gets (sobrenome);
	
	strcat (nome, sobrenome);
	printf ("%s \n",nome);
}