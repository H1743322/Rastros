#include <stdio.h>
#include <stdlib.h>

#include "dados.h"
ESTADO *inicializar_estado()
{
    ESTADO *e = (ESTADO *)malloc(sizeof(ESTADO));
    e->jogador_atual = 1;
    e->num_jogadas = 0;
    // Falta a resto da inicialização.
    return e;
}