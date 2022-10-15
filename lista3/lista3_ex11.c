#include <stdio.h> 

int main (){
    int numero1 , numero2 , numero3 , op , media; 

    printf("Digite tres numeros inteiros: \n"); 
    scanf("%d%d%d", &numero1, numero2, numero3); 

    printf("Operacoes\n");
    printf("1 - Geometrica \n");
    printf("2 - Ponderada \n");
    printf("3 - Harmonica \n");
    printf("4 - Aritmetica \n");
    printf("Digite a op deseja fazer: \n");
    scanf("%d", &op); 

    if (op == 1){
        media = numero1 * numero2 * numero3;
        printf("Resultado: %d", media);
    } 
        else if (op == 2){
            media = (numero1 + 2 * numero2 + 3 * numero3)/6;
            printf("Resultado: %d", media);
        }
            else if (op == 3){
                media = 1 / (1/numero1 + 1/numero2 + 1/numero3);
                printf("Resultado: %d", media);
            }
                else if (op == 4){
                    media = (numero1 + numero2 + numero3)/3;
                    printf("Resultado: %d", media);
                }
                    else printf("Valor invalido!");
}