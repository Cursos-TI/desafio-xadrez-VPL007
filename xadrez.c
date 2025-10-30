#include <stdio.h>

int main () {

    int i = 1;

    printf("\n");

    printf("=== Vamos continuar o jogo de xadrez de onde paramos... ====\n");
    printf("\n");

    //----------------------Jogada 1-----------------------------------
    printf("Torre anda 5 casas pra frente:\n");
    for (i = 1; i <= 5; i++)
    {
        printf("Uma casa para frente\n");
    }
    //-----------------------------------------------------------------
    
    printf("\n");
    printf("Jogador adverdário faz a sua jogada...\n");
    printf("\n");

    //----------------------Jogada 2-----------------------------------   
    printf("Bispo anda 5 casas na diagonal para a direita:\n");
    i = 1;
    do {
      
        if(i % 2 == 0) {
        printf("Uma casa pra direita!\n");
        } else {
        printf("Uma casa para cima\n");
        }

        i++;
    } while (i <= 10);

    //-----------------------------------------------------------------

    printf("\n");
    printf("Jogador adverdário faz a sua jogada...\n");
    printf("\n");

    //----------------------Jogada 3----------------------------------- 
    i = 1;

    printf("Rainha anda 8 casas para frente:\n");
    while (i <= 8)
    {
        printf("Uma casa para a esquerda\n", i);
        i++;
    }
    
    //-----------------------------------------------------------------
    
    printf("\n");
    printf("Jogador adverdário faz a sua jogada, e é cheque mate...\n");
    printf("\n");

    return 0;
}