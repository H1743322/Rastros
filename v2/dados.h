#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef DADOS_H
#define DADOS_H
#define BUF_SIZE 1024

typedef enum
{
    VAZIO,
    BRANCA,
    PRETA
} CASA;
typedef struct
{
    int coluna;
    int linha;
} COORDENADA;
typedef struct
{
    COORDENADA jogador1;
    COORDENADA jogador2;
} JOGADA;
typedef JOGADA JOGADAS[32];
typedef struct
{
    CASA tab[8][8];
    JOGADAS jogadas;
    int num_jogadas;
    int jogador_atual;
} ESTADO;

ESTADO *inicializar_estado();

int jogar(ESTADO *e, COORDENADA c);

void mostrar_tabuleiro(ESTADO *e);
int interpretador(ESTADO *e);

#endif