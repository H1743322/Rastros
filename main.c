#include <stdio.h>
#include <stdlib.h>
#include "dados.h"

int main()
{
    ESTADO *e = inicializar_estado();
    interpretador(e);
    return 0;
}