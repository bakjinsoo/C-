#include<stdio.h>
#include<stdlib.h>
#define MAX_STACK_SIZE 100
typedef int element;
typedef struct {
	element data[MAX_STACK_SIZE];
	int top;
}StackType;

void init_stack(StackType* s)
{
	s->top = -1;
}

int is_empty(StackType *s)
{
	return(s->top == -1);
}

int is_full(StackType* s)
{
	return(s->top == (MAX_STACK_SIZE - 1));
}

void push(StackType* s, element item)
{
	if (is_full(s))
	{
		printf("포화 \n");
	}
	else {
		s->data[s->top++] = item;
	}
}
void pop(StackType * s, element item)
{
	if (is_empty(s))
	{
		printf("공백 \n");
	}
	else {
		s->data[s->top]=0;
		s->data[s->top--];
	}
}
int main()
{
	StackType s;

	init_stack(&s);
	push(&s,1);
}