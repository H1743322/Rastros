#include <stdio.h>
#include <stdlib.h>
#include "dados.h"

int main()
{
    ESTADO *e = inicializar_estado();

    mostrar_tabuleiro(e);

    while (game_over(e)!=1)
    {
        prompt(e);

        interpretador(e);

        
    }
    if(obter_estado_casa(e, (COORDENADA){0, 7}) == BRANCA)
        printf("JOGADOR 1 VENCEU !!");
    else
        printf("JOGADOR 2 VENCEU !!");
    system("pause");
    return 0;
}