#include <stdio.h>
#include <stdlib.h>
#include "dados.h"
#include "interface.h"

int main()
{
    int c=0;
    ESTADO *e = inicializar_estado();
    while(c<100) {
        interpretador(e);
        c++;
    }

    return 0;
}