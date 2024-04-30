typedef struct No{
    char valor;
    struct No* proximo_no;
} No;

No* no(char valor, No* proximo_no); 
void inserir_no(No* H, No* no);
void imprimir_lista(No* H);
int quantidade_nos(No* H);
No* copiar_lista(No* H);
void liberar_lista(No* H);
int verificar_existencia(No* H, char valor_busca);
int verificar_ocorrencias(No* H, char valor_busca);
void imprimir_inversa(No* H);
void inserir_no_i(No* H, int i, No* no);
void remover_no_i(No* H, int i, No* no_ant);