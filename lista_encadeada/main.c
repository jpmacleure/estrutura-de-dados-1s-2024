#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

int main(int argc, char* argv[]){

    No* H = no('A', no('B', no('C', no('D', no('E', no('F', NULL))))));
    No* Hc = copiar_lista(H);

    imprimir_lista(H);
    printf("\n copia\n");
    imprimir_lista(Hc);

    H->proximo_no->valor = 'E';
    Hc->valor = 'U';

    printf("\n");
    imprimir_lista(H);
    printf("\n copia\n");
    imprimir_lista(Hc);

    liberar_lista(Hc);
    
    printf("\n qtd = %d", quantidade_nos(H));

    printf("\n E existe na lista? %d", verificar_existencia(H, 'E'));
    printf("\n E ocorre qnts vezes na lista? %d\n", verificar_ocorrencias(H, 'E'));

    imprimir_inversa(H);

    printf("\n");
    inserir_no_i(H, 2, no('J', NULL));
    imprimir_lista(H);
    printf("\n");

    remover_no_i(H, 6, NULL);
    imprimir_lista(H);
    printf("\n");


    exit(0);
}