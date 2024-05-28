#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "queue.h"

void enqueue(QueueNode** root, char data){
    QueueNode* qNode = malloc(sizeof(QueueNode));
    qNode->data = data;
    qNode->next = NULL;
    if(isEmpty(*root)){
        *root = qNode;
    }
    else{
        QueueNode* tmp = (*root)->next;
        if(tmp == NULL){
            (*root)->next = qNode;
        }
        else{
            do{
                if(tmp->next == NULL){
                    tmp->next = qNode;
                }
                else{
                    tmp = tmp->next;
                }
            } while(tmp->next != NULL);
        }
    }
}

char dequeue(QueueNode** root){
    if(isEmpty(*root)){
        return CHAR_MIN;
    }
    else{
        QueueNode* tmp = *root;
        *root = tmp->next;
        char tmpData = tmp->data;
        free(tmp);
        return tmpData;
    }
}

char peek(QueueNode* root){
    if(isEmpty(root)){
        return CHAR_MIN;
    }
    else{
        return root->data;
    }
}

int isEmpty(QueueNode* root){
    return root == NULL;
}

void display(QueueNode* root){
    QueueNode* tmp = root;
    while(tmp != NULL){
        printf("%c <- ", tmp->data);
        tmp = tmp->next;
    }
}