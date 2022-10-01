/*9. Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
seguintes categorias:
infantil A - 5 a 7
infantil B - 8 a 10
juvenil A - 11 a 13
juvenil B - 14 a 17 
senior - acima de 18
*/
#include <stdio.h>
int main (){
    int idade; 

    printf("Digite a idade do nadador: \n"); 
    scanf("%d", &idade);
    
    if (idade <5 || idade>120)
        printf("Idade invalida"); 
            else if (idade >=5 && idade <=7)
                printf("infantil A");
                else if (idade >=8 && idade <=10)
                    printf("infaltil B");
                    else if (idade >=11 && idade <=13)
                        printf("juvenil A");
                        else if (idade >=14 && idade <=17)
                            printf("juvenil B");
                            else 
                                printf("Senior"); 
}