#include <stdio.h>
#include <stdlib.h>
#include "dados.h"
ESTADO *inicializar_estado()
{
    ESTADO *e = (ESTADO *)malloc(sizeof(ESTADO));
    e->jogador_atual = 1;
    e->num_jogadas = 0;
    for(int i= 0 ; i<8; i++){
        for ( int j=0;j<8;j++){
            e->tab[i][j] = VAZIO;
        }
    }
    e->tab[0][7] = '1';
    e->tab[7][0] = '2';
    e->jogadas->jogador1.coluna = 0;
    e->jogadas->jogador1.linha = 0;
    e->jogadas->jogador2.coluna = 0;
    e->jogadas->jogador2.linha = 0;

    return e;
}

int obter_estado_casa(ESTADO *e, COORDENADA c){

    for(int i= 0 ; i<8; i++){
        for ( int j=0;j<8;j++){
            if(i == c.linha && j == c.coluna){
                e->tab[i][j] = BRANCA;
            }

        }
    }

    return 0;
}