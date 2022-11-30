#include <stdio.h>

int main(){
    float num1, num2, resultado;
    char operador;

    printf("OPERACOES \n");
    printf("+ Soma \n");
    printf("- Subtracao \n");
    printf("* Multiplicacao \n");
    printf("/ Divisao\n");

    printf("Digite o operador: \n");
    scanf("%c", &operador);     
    printf("Digite dois numeros: \n");
    scanf("%f%f", &num1, &num2);

    switch (operador)
    {
        case '+':
            resultado = num1 + num2;
            printf("Soma: %.1f", resultado); 
            break;
        case '-':
            resultado = num1 - num2;
            printf("Subtracao: %.1f", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Multiplicacao: %.1f", resultado); 
            break;
        case '/':
            resultado = num1 / num2;
            printf("Divisao: %.1f", resultado);
            break; 
        default: printf("Operador invalido!");
    }
}