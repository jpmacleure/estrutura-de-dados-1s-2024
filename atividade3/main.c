#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

int main(int argc, char* argv[]){
    
    FILE *fp = fopen(argv[1], "r");

    if(fp == NULL){
        printf("Erro ao abrir arquivo %s\n", argv[1]);
        exit(1);
    }
    int i;
    int qtd_n = 0;
    int *vetor_n;
    while( fscanf(fp, "%d\n", &i) != EOF){
        qtd_n++;
    }
    vetor_n = malloc(sizeof(int)*qtd_n);
    
    rewind(fp);
    i = 0;
    while( fscanf(fp, "%d\n", &vetor_n[i]) != EOF){
        i++;
    }

    fclose(fp);

    bubble_sort(vetor_n, qtd_n);

    FILE* arq_saida = fopen("saida.txt", "w");
    if(arq_saida == NULL){
        printf("Erro ao abrir arquivo saida.txt");
        exit(1);
    }

    for(i = 0; i < qtd_n; i++){
        fprintf(arq_saida, "%d\n", vetor_n[i]);
    }

    fclose(arq_saida);

    exit(0);
}