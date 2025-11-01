#include <stdio.h>

//--Recursividade para o movimento da Torre
void moverTorre (int casas) {
    if (casas > 0) {
        printf("Frente\n");
        moverTorre(casas - 1);
    }
}

//--Recursividade para o movimento do Bispo
void  moverBispo (int casas) {
    if (casas > 0) {
        for(int i = 0; i < 1; i++){
            printf("Cima\n");
            printf("Direita\n");
        }
        moverBispo(casas - 1);
    }
}

//--Recursividade para o movimento Raina
void moverRainha (int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

//--Recursividade para o movimento do Cavalo
void moverCavalo () {
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    printf("Direita\n");
}

//-------------------------Início do Jogo--------------------------------
int main () {

    printf("\n");

    printf("=== Vamos continuar o jogo de xadrez de onde paramos...Eu começo... ====\n");
    printf("\n");

    //----------------------Jogada 1

    printf("Torre anda 5 casas pra frente:\n");
    moverTorre(5);

    //------------------Jogada Adversário
    
    printf("\n");
    printf("Agora é vez do jogador adverdário, que faz a sua jogada. Minha vez de novo...\n");
    printf("\n");

    //----------------------Jogada 2   

    printf("Bispo anda 5 casas na diagonal para a direita:\n");
    moverBispo(5);

    //------------------Jogada Adversário
    
    printf("\n");
    printf("Agora é vez do jogador adverdário, que faz a sua jogada. Minha vez de novo...\n");
    printf("\n");  
    
    //----------------------Jogada 3
    
    printf("Rainha anda 8 casas para esquerda:\n");
    moverRainha(8);
    
    //------------------Jogada Adversário

    printf("\n");
    printf("Agora é vez do jogador adverdário, que faz a sua jogada. Minha vez de novo...\n");
    printf("\n");

    //----------------------Jogada 4
    
    printf("Cavalo anda 2 casas pra cima e 1 pra direita (em L):\n");
    moverCavalo();
    
    //------------------Jogada Adversário
    
    printf("\n");
    printf("Agora é vez do jogador adverdário, que faz a sua jogada, e é cheque mate. Perdi...\n");
    printf("\n");

    return 0;
}