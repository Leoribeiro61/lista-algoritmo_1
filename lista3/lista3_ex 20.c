#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    float a, b, c, x1, x2, delta;
    
    printf("Digite o valor do termo a: \n");
    scanf("%f", &a);
    printf("Digite o valor do termo b: \n");
    scanf("%f", &b);
    printf("Digite o valor do termo c: \n");
    scanf("%f", &c);
    
    delta = (b*b) - 4 * a *c;
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    
    
    if (delta < 0){
        printf("A equacao nao possui raizes reais \n");
    }
        else if (delta = 0){
            printf("Raiz unica");
        }
            else {
                printf("O valor de x1: %.2f \n", x1);
                printf("O valor de x2: %.2f", x2);
            }
    
}