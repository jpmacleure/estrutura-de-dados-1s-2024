typedef struct No{
    char valor;
    struct No* proximo_no;
} No;

No* no(char valor, No* proximo_no); 
void inserir_no(No* H, char valor);
void imprimir_lista(No* H);
void remover_no(No* H, char valor);