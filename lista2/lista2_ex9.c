#include <stdio.h>

int main(){

	char nome[15];
	float salar, result, vendas;

	printf("Digite seu nome: \n");
	scanf("%s", &nome);
	printf("Digite o valor do seu salario fixo: \n");
	scanf("%f", &salar);
	printf("Digite o valor de vendas no mes em (R$): \n");
	scanf("%f", &vendas);

	result = (vendas * 0.15) + salar;

	printf("%s voce recebera R$ %.2f", nome , result); 

}
