#include <stdio.h>

#define TAM_TABULEIRO 10
#define TAM_NAVIO 3

int main() {
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO] = {0};
    int navioHorizontal[TAM_NAVIO] = {3, 3, 3};
    int navioVertical[TAM_NAVIO] = {3, 3, 3};

    int linhaNavioHorizontal = 2;
    int colunaNavioHorizontal = 4;

    int linhaNavioVertical = 6;
    int colunaNavioVertical = 2;

    // Validação das coordenadas e tamanho dos navios
    if (linhaNavioHorizontal + TAM_NAVIO > TAM_TABULEIRO ||
        colunaNavioHorizontal + TAM_NAVIO > TAM_TABULEIRO ||
        linhaNavioVertical + TAM_NAVIO > TAM_TABULEIRO ||
        colunaNavioVertical + TAM_NAVIO > TAM_TABULEIRO) {
        printf("Coordenadas ou tamanho dos navios inválidos!\n");
        return 1;
    }

    // Posicionamento dos navios
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + i] = navioHorizontal[i];
        tabuleiro[linhaNavioVertical + i][colunaNavioVertical] = navioVertical[i];
    }

    // Exibição do tabuleiro
    printf("  A B C D E F G H I J\n");
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
