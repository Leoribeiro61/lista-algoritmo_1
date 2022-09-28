/*Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o
usuário entre com o valor e o estado de destino do produto e o programa retorne o preço
final do produto acrescido do imposto do estado em que ele será vendido. Se o estado
digitado não for válido, mostrará uma mensagem de erro.
MG = 7% , SP = 12% , RJ = 15% , MS = 8%.*/

#include <stdio.h>
#include <string.h>
int main(){
    float valorProduto, valorFinal;
    char estado [2], MG, SP, RJ, MS ; 

    printf("Digite o valor do produto: \n");
    scanf("%f", &valorProduto);
    printf("Digite o seu Estado: \n"); 
    scanf("%s", &estado);

    if (estado == "MG" || "mg"){
        valorFinal =valorProduto + (valorProduto*0.07);
        printf("O valor do produto e: R$%.2f", valorFinal);
    }
    else if (estado == "SP" || "sp"){
        valorFinal =valorProduto + (valorProduto*0.12);
        printf("O valor do produto e: R$%.2f", valorFinal);
    }
    else if  (estado == "RJ" || "rj"){
        valorFinal =valorProduto + (valorProduto*0.15);
        printf("O valor do produto e: R$%.2f", valorFinal);
    }
    else if  (estado == "MS" || "ms"){
        valorFinal =valorProduto + (valorProduto*0.08);
        printf("O valor do produto e: R$%.2f", valorFinal);
    }
    else{ 
        printf("Estado nao encotrado!");
    }
}