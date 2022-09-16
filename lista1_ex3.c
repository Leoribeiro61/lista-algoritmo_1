#include <stdio.h> 


int main (){
	float media1 , media2 , media3 , resultado; 
	 
	printf("Digite o valor do numero 1:  \n");
	scanf("%f", &media1 ); 
	printf("Digite o valor do numero 2:  \n");
	scanf("%f", &media2 );
	printf("Digite o valor do numero 3:  \n");
	scanf("%f", &media3 );
    resultado = (media1 + media2 + media3)/3;
	printf ("a media dos valores e %f \n", resultado  );
	 
	
}