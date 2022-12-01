#include <stdio.h>
#include <math.h> 

#define PI 3.14159

int main(){
    
    int raio;
    float area, volume; 
    
    printf("Digite o valor do raio: \n");
    scanf("%d", &raio);
    
    volume = (4/3.0) * PI * (raio * raio * raio);
    area = 4 * PI * (raio * raio);
    
    printf("O valor do volume da esfera e: %.2f \n", volume);
    printf("O valor da area da esfera e: %.2f", area);
    
}