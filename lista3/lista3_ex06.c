/*6. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
◦ Homens: (72,7 * h) – 58
◦ Mulheres: (62,1 * h) – 44,7*/ 

#include <stdio.h> 
int main(){
    float altura, resultadoHomem, resultadoMulher; 
    char sexo ;

    printf("Digite o sexo: \n"); 
    scanf("%c" , &sexo);
    printf("Qual a altura: \n");
    scanf("%f" , &altura); 
    

    if (sexo== 'm' || sexo== 'M')
        {
            resultadoHomem = (72.7 * altura ) - 58; 
            printf("Resultado homem: %.1f\n", resultadoHomem);
        }
        else
        {
            resultadoMulher = (62.1 * altura ) - 44.7;
            printf("Resultado mulher: %.1f\n" , resultadoMulher); 

        }
}