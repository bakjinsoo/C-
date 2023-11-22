#include<stdlib.h>
#include<stdio.h>
#define MAZE 10
typedef struct Pos {
	int x, y;
}Pos;
typedef struct Node {
	Pos pos;
	struct Node* link;
}Node;

typedef struct Stack {
	Node* top;
}Stack;

int maze[MAZE][MAZE] = {
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{0, 0, 0, 0, 1, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
	{1, 0, 1, 1, 1, 0, 0, 1, 0, 1},
	{1, 0, 0, 0, 1, 0, 0, 1, 0, 1},
	{1, 0, 1, 0, 1, 0, 0, 1, 0, 1},
	{1, 0, 1, 0, 1, 0, 0, 1, 0, 1},
	{1, 0, 1, 0, 1, 0, 0, 1, 0, 1},
	{1, 0, 1, 0, 0, 0, 0, 1, 0, 4},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};
//1은 벽 4는 출구 2는 플레이어가 이동한 기록
void init(Stack* s)
{
	s->top = NULL;
}
int is_empty(Stack* s)
{
	return(s->top == NULL);
}
void push(Stack* s, int x, int y) {
	Node* temp = (Node*)(malloc(sizeof(Node)));
	temp->pos.x = x;
	temp->pos.y = y;
	temp->link = s->top;
	s->top = temp;
}
Pos pop(Stack* s) {
	if (is_empty(s)) {
		printf("뺄게 없습니다.\n");
		exit(2);
	}
	else {
		Node* temp = s->top;
		Pos pos = { temp->pos.x,temp->pos.y };
		s->top = s->top->link;
		free(temp);
		return pos;
	}
}

void Move(Stack* s, int x, int y)
{
	if (x<0 || y<0 || x>MAZE || y>MAZE) {
		return;
	}
	if (maze[x][y] != 1 && maze[x][y] != 2) {
		push(s, x, y);
	}
}

int main()
{
	Stack s;
	Pos pos = { 1,0 };
	init(&s);
	int here_x = 0, here_y = 0;
	while (here_x != 8 || here_y != 9) {
		here_x = pos.x;
		here_y = pos.y;
		maze[here_x][here_y] = 2;
		Move(&s, here_x + 1, here_y);
		Move(&s, here_x - 1, here_y);
		Move(&s, here_x, here_y + 1);
		Move(&s, here_x, here_y - 1);
		if (is_empty(&s)) {
			printf("탈출실패\n");
			break;
		}
		else {
			pos = pop(&s);
		}
		for (int i = 0; i < MAZE; i++) {
			for (int j = 0; j < MAZE; j++) {
				if (maze[i][j] == 0) {
					printf("□");
				}
				else if (maze[i][j] == 1) {
					printf("■");
				}
				else if (maze[i][j] == 2) {
					printf("☆");
				}
				else if (maze[i][j] == 4) {
					printf("▲");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("도착했습니다\n");

}
