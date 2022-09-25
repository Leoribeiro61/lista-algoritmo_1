#include <stdio.h>

int main(){

    int quantidadeRolos , quantidadeMetros , metros , rolos = 50;

    printf("Digite a quantidade necessaria de metros que ira precisar: \n");
    scanf("%d", &metros);

    quantidadeRolos = (metros / rolos);
    quantidadeMetros = (metros % 50); 

    printf("Quantidade necessaria de rolos: %d rolos \n", quantidadeRolos);

    printf("Quantidade de metros avulsos: %d", quantidadeMetros);
}