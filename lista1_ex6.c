#include <stdio.h> 


int main (){
	float nota1 , nota2 , media ; 
	
	printf("Digite o valor da nota1, de 0 a 10:  \n");
	scanf("%f", &nota1 ); 
	if(nota1 > 10 )
	{
		printf("valor invalido \n");
		printf("Digite o valor da nota1, de 0 a 10 \n");
		scanf("%f", &nota1 );
	}
	printf("Digite o valor da nota 2, de 0 a 10:  \n");
	scanf("%f", &nota2 );
	if (nota2 > 10)
	{
		printf("valor invalido \n");
		printf("Digite o valor da nota2, de 0 a 10 \n");
		scanf("%f", &nota2);
		
	}
    media = (nota1*3.5 + nota2*7.5)/11;
	printf ("a media das notas sao %f \n", media  );
	
	  
	
}
//outra forma de fazer 

#include <stdio.h> 


int main (){
	float nota1 , nota2 , media ; 
	
	printf("Digite o valor da nota1, de 0 a 10:  \n");
	scanf("%f", &nota1 ); 
	
	printf("Digite o valor da nota 2, de 0 a 10:  \n");
	scanf("%f", &nota2 );
    media = (nota1*3.5 + nota2*7.5)/11;
	printf ("a media das notas sao %f \n", media  );
	
	 
	
}