#include <stdio.h>
#include <stdlib.h>

#include "dados.h"

ESTADO *inicializar_estado()
{
    ESTADO *e = (ESTADO *)malloc(sizeof(ESTADO));
    e->jogador_atual = 1;
    e->num_jogadas = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            e->tab[i][j] = VAZIO;
        }
    }
    e->tab[0][7] = '2';
    e->tab[7][0] = '1';
    
    e->jogadas[0].jogador1.coluna = 0;
    e->jogadas[0].jogador1.linha = 0;
    e->jogadas[0].jogador2.coluna = 0;
    e->jogadas[0].jogador2.linha = 0;
    
    return e;
}
