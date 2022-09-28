/*4. Faça um programa que leia o salário de um trabalhador e o valor da prestação de um
empréstimo. Se a prestação, for maior que 20% do salário, imprima: “Empréstimo não
concedido.”, caso contrário, imprima: “Empréstimo concedido.”*/

#include <stdio.h>
int main(){
    float salario, prestacao ; 

    printf("Digite seu salario: \n"); 
    scanf("%f", &salario);
    printf("Digite o valor da prestacao: \n");
    scanf("%f", &prestacao);

    if (prestacao > salario*0.20){
        printf("Emprestimo nao concedido");
    }
    else {
        printf("Emprestimo concedido");
    }
} 