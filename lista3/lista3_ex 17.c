#include <stdio.h>

int main(){
    
    int num;
    
    printf("Digite um numero: \n");
    scanf("%d", &num);
    
    if(num % 3 || num % 5){
        printf(" %d e divisivel ", num);
        return 0;
    }
        else{
            printf("%d Nao e divisivel");
            return 0;
        }
}