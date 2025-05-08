#include <stdio.h>

int main(){
    // Declaração de variáveis
    int linha[10];
    char coluna[10];
    int tabuleiro[10][10];
    int NAVIO = 3;

    // Estruturas repetitivas para preencher o conteúdo do tabuleiro com o valor 0
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // Estruturas repetitivas para preencher a quantidade de linhas representadas de 1 a 10
    // e colunas representadas de A a J
    for (int i = 0; i < 10; i++){
        linha[i] = i + 1;
        coluna[i] = 'A' + i;
    }

    // Posiciona o navio horizontal na linha 2, colunas 3, 4 e 5
    if (tabuleiro[2][3] == 0 && tabuleiro[2][4] == 0 && tabuleiro[2][5] == 0){
        tabuleiro[2][3] = NAVIO;
        tabuleiro[2][4] = NAVIO;
        tabuleiro[2][5] = NAVIO;
    }

    // Posiciona o navio vertical na coluna 7, linhas 5, 6 e 7
    if (tabuleiro[5][7] == 0 && tabuleiro[6][7] == 0 && tabuleiro[7][7] == 0){
        tabuleiro[5][7] = NAVIO;
        tabuleiro[6][7] = NAVIO;
        tabuleiro[7][7] = NAVIO;
    }

    // Posiciona o navio diagonal principal nas posições 0,0 / 1,1 / 2,2
    if (tabuleiro[0][0] == 0 && tabuleiro[1][1] == 0 && tabuleiro[2][2] == 0){
        tabuleiro[0][0] = NAVIO;
        tabuleiro[1][1] = NAVIO;
        tabuleiro[2][2] = NAVIO;
    }

    // Posiciona o navio diagonal secundária nas posições 0,9 / 1,8 / 2,7
    if (tabuleiro[0][9] == 0 && tabuleiro[1][8] == 0 && tabuleiro[2][7] == 0){
        tabuleiro[0][9] = NAVIO;
        tabuleiro[1][8] = NAVIO;
        tabuleiro[2][7] = NAVIO;
    }

    printf("\n");

    // Exibe o nome do jogo
    printf("TABULEIRO BATALHA-NAVAL\n");
    printf("   ");

    // Imprime na tela as colunas representadas pelas letras de A a J
    for (int i = 0; i < 10; i++){
        printf("%c ", coluna[i]);
    }
    printf("\n");

    // Imprime o tabuleiro com as posições dos navios
    for (int i = 0; i < 10; i++){
        printf("%2d", linha[i]);
        for (int j = 0; j < 10; j++){
            printf("%2d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
