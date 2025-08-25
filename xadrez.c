#include <stdio.h>

int main(){

    int i = 0;
    // Mover a torre 5 casas para direita //
    for (i = 0; i < 5; i++){
        printf("Torre movimentada para Direita! \n");
    }
    printf("\n");

    // Mover o Bispo para Diagonal //  
    i = 0;
    while (i < 5){
        printf("Bispo movimentado para Cima, Direita! \n");
        i++;
    }
    printf("\n");

    // Mover Rainha para Esquerda //
    i = 0;
    do {
        printf("Rainha movimentada para Esquerda! \n");
        i++;
    } while (i < 8);

    return 0;
}