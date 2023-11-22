#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10
typedef struct Queue {
	int data[MAX_SIZE];
	int front, rear;
}Queue;

void init_queue(Queue* q) {
	q->front = 0;
	q->rear = 0;
}
int is_empty(Queue* q) {
	return (q->front == q->rear);
}
int is_full(Queue* q) {
	return((q->rear + 1) % MAX_SIZE == q->front);
}
void enqueue(Queue* q, int item) {
	if (is_full(q)) {
		printf("꽉차있습니다.\n");
	}

	q->rear = (q->rear + 1) % MAX_SIZE;
	q->data[q->rear] = item;

}
int dequeue(Queue* q) {
	if (is_empty(q)) {
		printf("공백\n");
	}
	else {
		q->front = (q->front + 1) % MAX_SIZE;
		return(q->data[q->front]);
	}
}

void Fibona(Queue* q, int item)
{
	int result = 0;
	enqueue(q, 0);
	enqueue(q, 1);
	dequeue(q);
	if (item > 2) {
		for (int i = 2; i < item; i++) {

			result = q->data[q->front] + q->data[q->rear];
			dequeue(q);
			enqueue(q, result);
			printf("front : %d rear : %d\n", q->front, q->rear);
		}
	}
	printf("%d\n", result);
}
int main()
{
	Queue q;
	init_queue(&q);
	int key = 10;
	Fibona(&q, key);
}