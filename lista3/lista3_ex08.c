/*Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o
usuário entre com o valor e o estado de destino do produto e o programa retorne o preço
final do produto acrescido do imposto do estado em que ele será vendido. Se o estado
digitado não for válido, mostrará uma mensagem de erro.
MG = 7% , SP = 12% , RJ = 15% , MS = 8%.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    float valorProduto, valorFinal;
    char estado [3], MG, SP, RJ, MS ; 

    printf("Digite o valor do produto: \n");
    scanf("%f", &valorProduto);
    printf("Digite o seu Estado: \n"); 
    scanf("%s", estado);
    printf("estado %d", strcmp(estado, "sp"));
	estado[0]= tolower(estado[0]);
	estado[1]= tolower(estado[1]);
	
    if (strcmp(estado, "mg")==0){
        valorFinal =valorProduto + (valorProduto*0.07);
        printf("O valor do produto e: R$%.2f", valorFinal);
        }
        else if (strcmp(estado, "sp")==0){
        valorFinal =valorProduto + (valorProduto*0.12);
        printf("O valor do produto e: R$%.2f", valorFinal);
        }
            else if  (strcmp(estado, "rj")==0){
            valorFinal =valorProduto + (valorProduto*0.15);
            printf("O valor do produto e: R$%.2f", valorFinal);
            }       
                else if  (strcmp(estado, "ms")==0){
                valorFinal =valorProduto + (valorProduto*0.08);
                printf("O valor do produto e: R$%.2f", valorFinal);
                }
                    else{ 
                    printf("Estado nao encotrado!");
                    }
}