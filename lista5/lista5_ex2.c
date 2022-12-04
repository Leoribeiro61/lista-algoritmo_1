#include <stdio.h>
#include <string.h>
int main(){

	char cor[20];

    printf("Digite uma cor: \n");
    gets(cor);

    if ((strcmp (cor,"branco") == 0) || (strcmp(cor,"verde") == 0) || (strcmp(cor,"amarelo") == 0))
        printf("Cor valida!");
        else printf("cor invalida");
}