#include<stdio.h>
#include<stdlib.h>

#define MAX_STACK_SIZE 100
typedef int element;
element stack[MAX_STACK_SIZE];
int top = -1;

int is_empty()
{
	return(top == -1);
}
int is_full()
{
	return(top == (MAX_STACK_SIZE - 1));
}
void push(element item)
{
	if (is_full())
	{
		printf("포화\n");
		return;
	}
	else {
		stack[top++] = item;
	}
}
element pop()
{
	if (is_empty())
	{
		printf("공백\n");
		exit(1);
	}
	else
	{
		stack[top] = 0;
		return stack[top--];
	}
}

int main()
{
	for (int i = 0; i < 15; i++)
	{
		push(i);
		for (int j = 0; j < top; j++)
		{
			printf("현재 배열 : %d", stack[j]);
		}
		printf("\n");
	}
	printf("-----------------------------\n");
	for (int i = 0; i < 20; i++)
	{
		pop();
		for (int j = 0; j < top; j++)
		{
			printf("현재 배열 : %d", stack[j]);
		}
		printf("\n");
	}

}