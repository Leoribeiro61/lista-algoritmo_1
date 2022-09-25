#include <stdio.h> 

 

int main (){
	float horas , valorHora , salario; 
	int matricula ; 
	char nome[50]; 
	char sexo[10];  
	
	printf("Digite seu nome: \n");
	scanf("%s", &nome );
	
	printf("Digite seu sexo: \n");
	scanf("%s", &sexo);
	
	printf("informe o numero da matricula: \n");
	scanf("%d", &matricula);
		
	printf("informe a quantidade de horas trabalhadas: \n");
	scanf("%f", &horas);
	printf("informe o valor da sua hora de trabalho \n");
	scanf("%f", &valorHora);
	salario = (valorHora * horas);
	printf("o valor do salario e: %f \n" , salario );
	printf("nome: %s \n" , nome );
	printf("sexo: %s \n" , sexo);
	printf("matricula: %d \n" , matricula);
	printf("horas: %f \n" , horas);
	printf("valorHora: %f \n" , valorHora);
	printf("salario: %f \n" , salario);
	 
	
	
}