#include <stdio.h>
#include <stdlib.h>
#include "dados.h"

int jogar(ESTADO *e, COORDENADA c)
{
   // e->jogadas->jogador1.linha = c.linha;
   // e->jogadas->jogador1.coluna = c.coluna;
    obter_estado_casa(e,c);
    printf("jogar %d %d\n", c.coluna, c.linha);
    return 1;
}
