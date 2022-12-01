#include <stdio.h>

int main(){
	
	int A, B, C, D, diferenca;

	printf("Digite o primeiro valor: \n");
	scanf("%d", &A);
	printf("Digite o segundo valor: \n");
	scanf("%d", &B);
	printf("Digite o terceiro valor: \n");
	scanf("%d", &C);
	printf("Digite o quarto valor: \n");
	scanf("%d", &D);
	
	diferenca = (A * B ) - (C * D);

	printf("DIFERENCA = (%d * %d - %d * %d) \n", A, B, C, D);
	printf("DIFERENCA = %d", diferenca); 
}
