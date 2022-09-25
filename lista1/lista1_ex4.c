//construa um algoritmo que a partir da leitura de dois numeros inteiros
//forneca o resto e o quociente da divisao do primeiro pelo segundo

#include<stdio.h> 
int main(){
    int n1 , n2 , resto , quociente; 
    printf("Digite o valor do numero 1: ");
    scanf("%d", &n1); 
    printf("Digite o valor numero 2 : ");
    scanf("%d", &n2);
    quociente = n1 / n2;
    resto = n1 % n2;  // % é o resto da divisao (mod)
    printf("Quociente: %d\n", quociente); 
    printf("Resto: %d", resto);

}