typedef struct StackNode{
    char data;
    struct StackNode* next;
} StackNode;

void push(StackNode** root, char data);
char pop(StackNode** root);
char peek(StackNode* root);
int isEmpty(StackNode* root);
void display(StackNode* root);