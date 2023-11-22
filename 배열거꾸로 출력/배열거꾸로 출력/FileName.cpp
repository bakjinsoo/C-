#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
int len;
typedef struct Stack {
	int top;
	int data[MAX_SIZE];
}Stack;
void init(Stack* s) {
	s->top = -1;
}
int is_empty(Stack* s) {
	return (s->top == -1);
}
int is_full(Stack* s) {
	return(s->top == len - 1);
}
void push(Stack* s, int item)
{
	if (is_full(s)) {
		printf("포화\n");
	}
	else {
		s->data[++(s->top)] = item;
	}
}
int pop(Stack* s) {
	if (is_empty(s)) {
		printf("공백\n");
		exit(1);
	}
	else {
		return (s->data[(s->top)--]);
	}
}
int main()
{
	Stack s;
	int item;
	int p[MAX_SIZE];
	init(&s);
	printf("정수 배열의 크기 : ");
	scanf_s("%d", &len);
	printf("정수를 입력하시오 : ");
	for (int i = 0; i < len; i++) {
		scanf_s("%d", &item);
		push(&s, item);
	}
	printf("반전된 정수 배열 : ");
	for (int i = 0; i < len; i++) {
		p[i] = pop(&s);
		printf("%d ", p[i]);
	}
}