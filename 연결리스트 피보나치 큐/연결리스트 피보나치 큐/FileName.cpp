#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data;
	Node* link;
}Node;

typedef struct Queue {
	Node* front, * rear;
}Queue;
void init(Queue* q) {
	q->front = q->rear = NULL;
}
int is_empty(Queue* q) {
	return(q->rear == NULL);
}
void enqueue(Queue* q, int item) {
	Node* tmp = (Node*)malloc(sizeof(Node));
	tmp->data = item;
	tmp->link = NULL;
	if (is_empty(q)) {
		q->front = tmp;
		q->rear = tmp;
	}
	else {
		q->rear->link = tmp;
		q->rear = tmp;
	}
}
int dequeue(Queue* q)
{
	Node* tmp;
	int data;
	if (is_empty(q)) {
		printf("°¡µæÂü\n");
	}
	else {
		tmp = q->front;
		data = tmp->data;
		q->front = tmp->link;
		if (q->front == NULL)
			q->rear = NULL;
		free(tmp);
		return(data);
	}
}
void Fibo(Queue* q, int item) {
	int result = 0;
	enqueue(q, 0);
	enqueue(q, 1);
	for (int i = 2; i < item; i++) {
		result = q->front->data + q->rear->data;
		dequeue(q);
		enqueue(q, result);
	}
	printf("%d ", result);
}
int main()
{
	Queue q;
	init(&q);
	int key = 10;
	Fibo(&q, 10);
}