#include <stdio.h>
#include <string.h>

int main(){
    char palavra[50];
    int i, tamanho;
    fgets(palavra, 50, stdin);
    

    
    for(i = 0, tamanho = 0; palavra[i] != '\0'; i++)
        tamanho++;

    tamanho = tamanho - 1;

    printf("%d\n", tamanho);
    return 0;
}