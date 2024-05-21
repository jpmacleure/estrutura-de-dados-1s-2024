#include <stdio.h>
#include <stdlib.h>

void funcao1(){
    printf("EXECUTANDO FUNCAO 1\n");
}

void funcao2(){
    funcao1();
    printf("EXECUTANDO FUNCAO 2\n");
}

void funcao3(){
    funcao2();
    printf("EXECUTANDO FUNCAO 3\n");
}

int main(int argc, char* argv[]){
    funcao3();
    exit(0);
}