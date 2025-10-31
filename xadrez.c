#include <stdio.h>

int main () {

    int i = 1;
    int mov_cavalo, mov_bispo, mov_torre, mov_rainha;

    printf("\n");

    printf("=== Vamos continuar o jogo de xadrez de onde paramos... ====\n");
    printf("\n");

    //----------------------Jogada 1-----------------------------------
    printf("Torre anda 5 casas pra frente:\n");
    for (i = 1; i <= 5; i++)
    {
        printf("Cima\n");
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
        printf("Direita!\n");
        } else {
        printf("Cima\n");
        }

        i++;
    } while (i <= 10);

    //-----------------------------------------------------------------

    printf("\n");
    printf("Jogador adverdário faz a sua jogada...\n");
    printf("\n");

    //----------------------Jogada 3----------------------------------- 
    i = 1;

    printf("Rainha anda 8 casas para esquerda:\n");
    while (i <= 8)
    {
        printf("Esquerda\n", i);
        i++;
    }
    
    //-----------------------------------------------------------------

    printf("\n");
    printf("Jogador adverdário faz a sua jogada...\n");
    printf("\n");

    //----------------------Jogada 4----------------------------------- 
    i = 1;

    printf("Cavalo anda 2 casas pra baixo e 1 pra direita (em L):\n");
    while (i <= 1)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("Baixo\n");
        }
        printf("Direita\n");
        i++;
    }
    
    //-----------------------------------------------------------------
    
    printf("\n");
    printf("Jogador adverdário faz a sua jogada, e é cheque mate...\n");
    printf("\n");

    return 0;
}