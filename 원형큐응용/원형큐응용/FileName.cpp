#include<stdio.h>
#include<stdlib.h>

#define MAX_QUEUE_SIZE 5

typedef struct {
	int front, rear, count;
	int data[MAX_QUEUE_SIZE];
}CircleQueue;

void init(CircleQueue* q)
{
	q->count = 0; q->front = 0; q->rear = 0;
}

int is_empty(CircleQueue* q)
{
	return(q->count == 0);
}

int is_full(CircleQueue* q)
{
	return(q->count == MAX_QUEUE_SIZE);
}

void enqueue(CircleQueue* q, int item)
{
	if (is_full(q))
	{
		printf("포화 상태입니다\n");
		return;
	}
	else {
		q->data[q->rear] = item;
		q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
		q->count++;
	}
}

int dequeue(CircleQueue* q)
{
	if (is_empty(q))
	{
		printf("공백\n");
		exit(1);
	}
	else {
		q->front = (q->front + 1) % MAX_QUEUE_SIZE;
		q->count--;
		return q->data[q->front];
	}
}

void queue_print(CircleQueue* q)
{
	printf("Queue(front==%d rear== %d) = ", q->front, q->rear);
	if (!is_empty(q))
	{
		int i = q->front;
		do {
			printf("%d | ", q->data[i]);
			i = (i + 1) % (MAX_QUEUE_SIZE);
			if (i == q->rear)
				break;
		} while (i != q->front);
	}
	printf("\n");
}

int main()
{
	CircleQueue q;
	int item;
	init(&q);
	enqueue(&q, 10);
	queue_print(&q);
	enqueue(&q, 20);
	queue_print(&q);
	enqueue(&q, 30);
	queue_print(&q);
	enqueue(&q, 40);
	queue_print(&q);
	enqueue(&q, 50);
	queue_print(&q);
}