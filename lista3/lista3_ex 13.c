#include <stdio.h>
#include<math.h>

int main (){
    int pc;
    float x , y;

	printf("Digite dois numeros:");
	scanf("%f%f", &x, &y);

	printf("Digite se \n x == 0.0 && y == 0.0 : 1\n  x > 0 && y > 0 : 2  \n x < 0 && y > 0 : 3 \n  x < 0 && y < 0 :4 \n x > 0 && y < 0 : 5 \n");
	scanf("%d", &pc);

	switch (pc){

	case 1 :printf ("Origem"); break;
	case 2 :printf("Q1"); break;
	case 3 :printf("Q2"); break;
	case 4 :printf("Q3"); break;
	case 5 :printf("Q4");break;
	}
}