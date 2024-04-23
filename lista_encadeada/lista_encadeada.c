#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

No* no(char valor, No* proximo_no){
    No* no = malloc(sizeof(No));
    no->valor = valor;
    no->proximo_no = proximo_no;
    return no;
}

void inserir_no(No* H, No* no){
    if( H != NULL){
        if( H->proximo_no == NULL){
            H->proximo_no = no;
        }
        else{
            inserir_no(H->proximo_no, no);
        }
    }
}

void imprimir_lista(No* H){
    if(H != NULL){
        printf("%c ", H->valor);
        imprimir_lista(H->proximo_no);
    }
}

int quantidade_nos(No* H){
    if( H != NULL){
        return 1 + quantidade_nos(H->proximo_no);
    }
    return 0;
}

No* copiar_lista(No* H){
   if(H != NULL){
        return no(H->valor, copiar_lista(H->proximo_no));
   }
   return NULL; 
}

void liberar_lista(No* H){
    if(H != NULL){
        liberar_lista(H->proximo_no);
        free(H);
    }
}

int verificar_existencia(No* H, char valor_busca){
    if(H != NULL){
        if(H->valor == valor_busca){
            return 1;
        }
        return verificar_existencia(H->proximo_no, valor_busca);
    }
    return 0;
}

int verificar_ocorrencias(No* H, char valor_busca){
    if(H != NULL){
        if(H->valor == valor_busca){
            return 1 + verificar_ocorrencias(H->proximo_no, valor_busca);
        }
        return 0 + verificar_ocorrencias(H->proximo_no, valor_busca);
    }
    return 0;
}

void imprimir_inversa(No* H){
    if(H != NULL){
        imprimir_inversa(H->proximo_no);
        printf("%c ", H->valor);
    }
}