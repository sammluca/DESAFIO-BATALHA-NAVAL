#include <stdio.h>

// Constantes para tamanho dos navios e tabuleiro

#define TAM_TABULEIRO 10
#define TAM_NAVIO 3

int main() {
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO] = {0};

   // Definição dos vetores

    int navioHorizontal[TAM_NAVIO] = {3, 3, 3};
    int navioVerticalDireita[TAM_NAVIO] = {3, 3, 3};
    int navioDiagonal[TAM_NAVIO] = {3, 3, 3};
    int navioDiagonalSecundario[TAM_NAVIO]= {3, 3, 3};

   // Definição das coorenadas dos navios no tabuleiro

    int linhaNavioHorizontal = 2;
    int colunaNavioHorizontal = 4;

    int linhaNavioVerticalEsquerda = 6;
    int colunaNavioVerticalEsquerda = 2;

    int linhaNavioVerticalDireita = 6;
    int colunaNavioVerticalDireita = 7;

    int linhaNavioDiagonal = 0;
    int colunaNavioDiagonal = 0;

    int linhaNavioSecundario = 3;
    int colunaNavioSecundario = 7;

    // Validação das coordenadas e tamanho dos navios

    if (linhaNavioHorizontal + TAM_NAVIO > TAM_TABULEIRO || colunaNavioHorizontal + TAM_NAVIO > TAM_TABULEIRO ||
        linhaNavioVerticalDireita + TAM_NAVIO > TAM_TABULEIRO || colunaNavioVerticalDireita + TAM_NAVIO > TAM_TABULEIRO ||
        linhaNavioDiagonal + TAM_NAVIO > TAM_TABULEIRO || colunaNavioDiagonal + TAM_NAVIO > TAM_TABULEIRO ||
        linhaNavioSecundario + TAM_NAVIO > TAM_TABULEIRO || colunaNavioSecundario + TAM_NAVIO > TAM_TABULEIRO) {
        printf("Coordenadas ou tamanho dos navios inválidos!\n");
        return 1;
    }

    // Posicionamento dos navios
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + i] = navioHorizontal[i];
        tabuleiro[linhaNavioVerticalDireita + i][colunaNavioVerticalDireita] = navioVerticalDireita[i];
        tabuleiro[linhaNavioDiagonal + i][colunaNavioDiagonal + i] = navioDiagonal[i];
        tabuleiro[linhaNavioSecundario + i][colunaNavioSecundario - i] = navioDiagonalSecundario[i];
      
    }

    // Exibição do tabuleiro
    printf(" A B C D E F G H I J\n");
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

