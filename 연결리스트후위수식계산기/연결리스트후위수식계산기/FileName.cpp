#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef char element;

typedef struct Node {
    element data;
    struct Node* link;
} Node;

typedef struct Stack {
    Node* top;
} Stack;

void init(Stack* s) {
    s->top = NULL;
}

int is_empty(Stack* s) {
    return (s->top == NULL);
}

void push(Stack* s, element item) {
    Node* tmp = (Node*)malloc(sizeof(Node));
    tmp->data = item;
    tmp->link = s->top;
    s->top = tmp;
}

element pop(Stack* s) {
    if (is_empty(s)) {
        printf("공백\n");
        exit(1);
    }
    else {
        Node* tmp;
        tmp = s->top;
        element data = tmp->data;
        s->top = s->top->link;
        free(tmp);
        return data;
    }
}

element eval(char exp[], int len) {
    int op1, op2, i, value = 0;
    char ch;
    Stack s;
    init(&s);
    for (i = 0; i < len; i++) {
        ch = exp[i];
        if (ch != '+' && ch != '-' && ch != '/' && ch != '*') {
            value = ch - '0';
            push(&s, value);
        }
        else {
            op2 = pop(&s);
            op1 = pop(&s);
            switch (ch) {
            case '+':
                push(&s, op1 + op2);
                break;
            case '-':
                push(&s, op1 - op2);
                break;
            case '*':
                push(&s, op1 * op2);
                break;
            case '/':
                push(&s, op1 / op2);
                break;
            }
        }
    }
    return pop(&s);
}

int main() {
    char ch[] = "823/32*-+";
    int len = strlen(ch);
    int result = eval(ch, len);
    printf("결과: %d\n", result);
    return 0;
}