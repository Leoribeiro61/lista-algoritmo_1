#include <stdio.h>

int main(){
    
    float valorX, valorY; 
    
    printf("Digite o valor de X: \n");
    scanf("%f", &valorX);
    printf("Digite o valor de Y: \n");
    scanf("%.1f", &valorY);
    
    if (valorX > 0 && valorY > 0){
        printf("Quadrante 1 \n");
        return 0;
        }
        else if (valorX < 0 && valorY > 0){
            printf("Quadrante 2 \n");
            return 0;
            }
            else if (valorX < 0 && valorY < 0){
                printf("Quadrante 3 \n");
                return 0;
                }
                else if (valorX > 0 && valorY < 0){
                    printf("Quadrante 4 \n");
                    return 0;
                    }
                    else{
                        printf("Origem!");
                        return 0; 
                        }
}
