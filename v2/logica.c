#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "dados.h"

int jogar(ESTADO *e, COORDENADA c)
{
    int lin, col, lin2, col2;
    lin = c.linha;
    col = c.coluna;
    lin2 = e->last_coord.linha;
    col2 = e->last_coord.coluna;

    if (val_move(e, c) == 1 && val_vazio(e, c) == 1)

    {
        e->tab[lin2][col2] = PRETA;
        e->tab[lin][col] = BRANCA;
        e->last_coord.coluna = col;
        e->last_coord.linha = lin;
        update_player(e);
    }

    //else return 0;
    return 1;
}
int val_vazio(ESTADO *e, COORDENADA c)
{
    if (obter_estado_casa(e, c) == VAZIO)
        return 1;
    else
        return 0;
}
int val_move(ESTADO *e, COORDENADA c)
{

    int lin = c.linha;
    int col = c.coluna;
    int lin2 = e->last_coord.linha;
    int col2 = e->last_coord.coluna;
    if (abs(col2 - col) <= 1 && abs(lin2 - lin) <= 1 && (col2 != col || lin2 != lin))
        return 1;
    else
        return 0;
}
void update_player(ESTADO *e)
{
    COORDENADA c = e->last_coord;
    if (obter_jogador_atual(e) == 1)
    {
        e->jogador_atual = 2;
        e->jogadas[e->num_jogadas].jogador1 = c;
    }
    else
    {
        e->jogador_atual = 1;
        e->jogadas[e->num_jogadas].jogador2 = c;
        e->num_jogadas++;
    }
}
int game_over(ESTADO *e)
{
    /*int c1 = 0;
    int l1 = 7;
    int c2 = 7;
    int l2 = 0;
    int col = c.coluna;
    int lin = c.linha;
    if (col == c1 && lin == l1)
        return 1;
    else
        return 0;*/
    if ((obter_estado_casa(e, (COORDENADA){0, 7}) == BRANCA) || (obter_estado_casa(e, (COORDENADA){7, 0}) == BRANCA))
        return 1;
    else
        return 0;
}