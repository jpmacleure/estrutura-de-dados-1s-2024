#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(int argc, char* argv[]){

    StackNode* top = NULL;

    push(&top, 'A');
    push(&top, 'B');
    push(&top, 'C');

    display(top);

    printf("%c \n", pop(&top));

    display(top);

    printf("%c \n", peek(top));

    printf("%c ", pop(&top));
    printf("%c ", pop(&top));

    exit(0);
}