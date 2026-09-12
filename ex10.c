#include <stdio.h>

void inicializarTabuleiro(char tabuleiro[3][3]) {
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            tabuleiro[i][j] = ' ';
        }
    }
}

void exibirTabuleiro(char tabuleiro[3][3]) {
    int i;

    printf("\n");

    for (i = 0; i < 3; i++) {
        printf(" %c | %c | %c ", 
               tabuleiro[i][0],
               tabuleiro[i][1],
               tabuleiro[i][2]);

        if (i < 2) {
            printf("\n---+---+---\n");
        }
    }

    printf("\n\n");
}

int jogadaValida(char tabuleiro[3][3], int linha, int coluna) {

    if (linha < 0 || linha > 2 ||
        coluna < 0 || coluna > 2) {
        return 0;
    }

    if (tabuleiro[linha][coluna] != ' ') {
        return 0;
    }

    return 1;
}

int verificarVitoria(char tabuleiro[3][3], char jogador) {
    int i;

    // Verifica linhas
    for (i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == jogador &&
            tabuleiro[i][1] == jogador &&
            tabuleiro[i][2] == jogador) {
            return 1;
        }
    }

    // Verifica colunas
    for (i = 0; i < 3; i++) {
        if (tabuleiro[0][i] == jogador &&
            tabuleiro[1][i] == jogador &&
            tabuleiro[2][i] == jogador) {
            return 1;
        }
    }

    // Diagonal principal
    if (tabuleiro[0][0] == jogador &&
        tabuleiro[1][1] == jogador &&
        tabuleiro[2][2] == jogador) {
        return 1;
    }

    // Diagonal secundaria
    if (tabuleiro[0][2] == jogador &&
        tabuleiro[1][1] == jogador &&
        tabuleiro[2][0] == jogador) {
        return 1;
    }

    return 0;
}

int verificarEmpate(char tabuleiro[3][3]) {
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == ' ') {
                return 0;
            }
        }
    }

    return 1;
}

int main() {
    char tabuleiro[3][3];
    char jogador = 'X';
    int linha, coluna;

    inicializarTabuleiro(tabuleiro);

    while (1) {

        exibirTabuleiro(tabuleiro);

        printf("Jogador %c, digite a linha (1-3): ", jogador);
        scanf("%d", &linha);

        printf("Jogador %c, digite a coluna (1-3): ", jogador);
        scanf("%d", &coluna);

        // Converte de 1-3 para 0-2
        linha--;
        coluna--;

        if (!jogadaValida(tabuleiro, linha, coluna)) {
            printf("\nJogada invalida! Tente novamente.\n");
            continue;
        }

        tabuleiro[linha][coluna] = jogador;

        if (verificarVitoria(tabuleiro, jogador)) {
            exibirTabuleiro(tabuleiro);
            printf("Jogador %c venceu!\n", jogador);
            break;
        }

        if (verificarEmpate(tabuleiro)) {
            exibirTabuleiro(tabuleiro);
            printf("Empate!\n");
            break;
        }

        // Troca o jogador
        if (jogador == 'X') {
            jogador = 'O';
        } else {
            jogador = 'X';
        }
    }

    return 0;
}
