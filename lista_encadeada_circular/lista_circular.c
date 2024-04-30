#include <stdio.h>
#include <stdlib.h>
#include "lista_circular.h"

No* no(char valor, No* proximo_no){
    No* no = malloc(sizeof(No));
    no->valor = valor;
    no->proximo_no = proximo_no;
    return no;
}

void inserir_no(No* H, char valor){
    if(H != NULL){
        if(H->proximo_no == NULL){
            H->proximo_no = no(valor, H);
        }
        else{
            No* tmp = H->proximo_no;
            while(tmp->proximo_no != H){
                tmp = tmp->proximo_no;
            }
            tmp->proximo_no = no(valor, H);
        }
    }
}

void imprimir_lista(No* H){
    if(H != NULL){    
        printf("%c ", H->valor);

        No* tmp = H->proximo_no;
        while(tmp != H & tmp != NULL){
            printf("%c ", tmp->valor);
            tmp = tmp->proximo_no;
        }
    }
}

void remover_no(No* H, char valor){
    if(H != NULL){
        No* tmp; 
        No* tmp_ant;

        tmp     = H->proximo_no;
        tmp_ant = H;

        while(tmp != H & tmp != NULL){
            if(tmp->valor == valor){
                tmp_ant->proximo_no = tmp->proximo_no;
                free(tmp);
                tmp = tmp_ant->proximo_no;
            }
            else{
                tmp_ant = tmp;
                tmp = tmp->proximo_no;
            }
        }
    }
}