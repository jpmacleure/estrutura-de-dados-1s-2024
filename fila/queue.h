typedef struct QueueNode{
    char data;
    struct QueueNode* next;
} QueueNode;

void enqueue(QueueNode** root, char data);
char dequeue(QueueNode** root);
char peek(QueueNode* root);
int isEmpty(QueueNode* root);
void display(QueueNode* root);