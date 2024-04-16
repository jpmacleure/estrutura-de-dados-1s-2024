#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

int main(int argc, char* argv[]){

    No* H = no('A', no('B', no('C', no('D', no('E', no('F', NULL))))));
    No* Hc = copiar_lista(H);

    imprimir_lista(H);
    printf("\n copia\n");
    imprimir_lista(Hc);

    H->proximo_no->valor = 'X';
    Hc->valor = 'U';

    printf("\n");
    imprimir_lista(H);
    printf("\n copia\n");
    imprimir_lista(Hc);

    liberar_lista(Hc);
    
    printf("\n qtd = %d", quantidade_nos(H));
    printf("\n copia qtd = %d", quantidade_nos(Hc));

    exit(0);
}