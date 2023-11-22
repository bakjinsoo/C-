#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_STACK 100
typedef char element;
typedef struct Stack {
	element data[MAX_STACK];
	int top;
}Stack;
void init(Stack* s) {
	s->top = -1;
}
int is_empty(Stack* s) {
	return (s->top == -1);
}
int is_full(Stack* s) {
	return (s->top == MAX_STACK - 1);
}
void push(Stack* s, element item) {
	if (is_full(s)) {
		printf("포화\n");
	}
	else {
		s->data[++(s->top)] = item;
	}
}
element pop(Stack* s) {
	if (is_empty(s)) {
		printf("공백\n");
	}
	else {
		return s->data[s->top--];
	}
}
int eval(char exp[], int len)
{
	int op1, op2, value, i = 0;
	char ch;
	Stack s;
	init(&s);
	for (i = 0; i < len; i++) {
		ch = exp[i];
		if (ch != '+' && ch != '-' && ch != '*' && ch != '/') {
			value = ch - '0';
			push(&s, value);
		}
		else {
			op2 = pop(&s);
			op1 = pop(&s);
			switch (ch)
			{
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
	int result;
	char exp[] = "82/3-32*+";
	int len = strlen(exp);
	result = eval(exp, len);
	printf("결과: %d\n", result);
	return 0;
}