#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 81
#define MAZE_SIZE 9
typedef struct Pos {
    short x;
    short y;
}Pos;

typedef struct Stack {
    Pos data[MAX_SIZE]; int top;
}Stack;

char maze[MAZE_SIZE][MAZE_SIZE] = {
    {'e','1','0','0','0','0','0','0','1'},
    {'0','1','0','1','0','1','1','0','1'},
    {'0','1','1','1','0','1','0','0','0'},
    {'0','1','0','1','0','1','0','1','0'},
    {'0','1','0','1','0','1','0','1','1'},
    {'0','1','0','1','0','1','0','0','0'},
    {'0','1','0','1','0','1','0','1','0'},
    {'0','1','0','1','0','1','0','1','0'},
    {'0','0','0','0','0','1','0','1','x'}
};

void Init(Stack* p) {
    p->top = -1;
}
int Is_full(Stack* p) {
    return (p->top == MAX_SIZE - 1);
}
int Is_empty(Stack* p) {
    return (p->top == -1);
}
void Push(Stack* p, Pos data) {
    if (Is_full(p)) {
        printf("스택이 꽉찼습니다\n"); return;
    }
    else
    {
        p->top++;
        p->data[p->top].x = data.x; p->data[p->top].y = data.y;
    }
}
Pos Pop(Stack* p) {
    if (Is_empty(p)) {
        printf("스택이 비어있습니다\n");
        exit(1);
    }
    return p->data[(p->top)--];
}
void Movable(Stack* s, int x, int y) {
    if (x < 0 || y < 0 || x > MAZE_SIZE || y > MAZE_SIZE) return;
    if (maze[x][y] != '1' && maze[x][y] != '.') {
        Pos next;
        next.x = x;
        next.y = y;
        Push(s, next);
    }
}

int main() {
    Stack s;
    Pos here;
    int i, j, x, y;
    FILE* fp = fopen("result.txt", "w");
    Init(&s);
    printf("미로찾기를 시작해보자!\n");
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++)
            printf("%c ", maze[i][j]);
        printf("\n");
    }
    for (i = 0; i < MAZE_SIZE; i++) {
        for (j = 0; j < MAZE_SIZE; j++) {
            if (maze[i][j] == 'e') {
                here.x = i;
                here.y = j;
            }
        }
    }
    fprintf(fp, "시작 점 :(%d,%d) \n", here.x, here.y);
    printf("시작 점 :(%d,%d) \n", here.x, here.y);
    while (maze[here.x][here.y] != 'x')
    {
        x = here.x;
        y = here.y;
        maze[x][y] = '.';
        Movable(&s, x + 1, y);
        Movable(&s, x - 1, y);
        Movable(&s, x, y + 1);
        Movable(&s, x, y - 1);
        if (Is_empty(&s)) {
            fprintf(fp, "탈출 실패\n");
            printf("탈출 실패\n");
            return 0;
        }
        else
        {
            here = Pop(&s);
            fprintf(fp, "(%d,%d)\n", here.x, here.y);
            printf("(%d,%d)\n", here.x, here.y);
        }
    }
    fprintf(fp, "도착 점 (%d,%d)\n", here.x, here.y);
    fprintf(fp, "탈출 성공\n");
    printf("도착 점 (%d,%d)\n", here.x, here.y);
    printf("탈출 성공\n");
    return 0;
}