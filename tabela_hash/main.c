#include <stdio.h>
#include <stdlib.h>
#include "tabela_hash.h"

int main(int argc, char* argv[]){

    char** tabela = tabela_hash();

    put("DF", "Brasilia", tabela);
    put("SE", "Aracaju", tabela);
    put("PB", "Joao Pessoa", tabela);
    put("PA", "Belem", tabela);

    printf("%s\n", get("PB", tabela));
    printf("%s\n", get("PA", tabela));
    printf("%s\n", get("SE", tabela));

    printf("Contains DF? %d\n", contains("DF", tabela));
    printf("Contains SP? %d\n", contains("SP", tabela));
    remover("DF", tabela);
    printf("Contains DF? %d\n", contains("DF", tabela));

    exit(0);
}