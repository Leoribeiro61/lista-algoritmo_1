#include <stdio.h>
#include <string.h>

int main (){

	char nomeCompleto[300], email[300],usuario [300];
	char backup [300],backup2 [300],backup3 [300];
	
	printf ("Digite seu nome completo: \n");
	gets(nomeCompleto);
	
	printf("Digite seu email: \n");
	gets(email);
    
	printf("Digite seu login de usuario: \n");
	gets(usuario);
	
	strcpy(backup,nomeCompleto);
	strcpy(backup2,email);
    strcpy(backup3,usuario);
	
	printf("%s \n",backup);
	printf("%s \n",backup2);
	printf("%s \n",backup3);
}