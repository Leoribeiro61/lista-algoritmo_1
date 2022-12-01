#include <stdio.h>
#include <math.h>

int main(){

	float x1, x2, y1, y2, distancia;

	printf("Digite um valor para x1: \n");
	scanf("%f", &x1);
	printf("Digite um valor para x2: \n");
	scanf("%f", &x2);
	printf("Digite um valor para y1: \n");
	scanf("%f", &y1);
	printf("Digite um valor para y2: \n");
	scanf("%f", &y2);

	distancia = sqrt ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	printf("A distancia entre X e Y e: %.4f", distancia);

}