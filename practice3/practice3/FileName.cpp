#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

typedef struct {
	int data[MAX_SIZE];
	int front, rear;
	int count;
} CircleQueue;

void init(CircleQueue* q) {
	q->front = 0;
	q->rear = 0;
	q->count = 0;
}

int isFull(CircleQueue* q) {
	return (q->count == MAX_SIZE);
}

int isEmpty(CircleQueue* q) {
	return (q->count == 0);
}

void enqueue(CircleQueue* q, int item) {
	if (isFull(q)) {
		printf("큐가 가득차게 되었습니다. %d\n", item);
		return;
	}


	q->data[q->rear] = item;
	q->rear = (q->rear + 1) % MAX_SIZE;
	q->count++;
}

int dequeue(CircleQueue* q) {
	if (isEmpty(q)) {
		printf("큐가 비었습니다.\n");
		exit(1);
	}

	int removedValue = q->data[q->front];
	q->front = (q->front + 1) % MAX_SIZE;
	q->count--;

	return removedValue;
}

void printQueue(CircleQueue* q) {
	if (isEmpty(q)) {
		printf("큐가 비었습니다.\n");
		return;
	}
	printf("(Queue->front : %d, Queue->rear : %d) (현재 카운트 : %d): ", q->front, q->rear, q->count);
	printf("원형 큐 요소 : ");
	int i;
	for (i = 0; i < q->count; ++i) {
		printf("%d ", q->data[(q->front + i) % MAX_SIZE]);
	}
	printf("\n");
}

int main() {
	CircleQueue q;
	init(&q);



	do {
		int data;
		printf("데이터 입력 : \n");
		scanf_s("%d", &data);

		if (!isFull(&q)) {
			enqueue(&q, data);
		}
		else {
			printf("큐가 포화상태입니다.\n");
		}
		printQueue(&q);
	} while (!isFull(&q));
	printf("큐는 포화상태입니다 : (현재 데이터 크기 : %d) (현재 카운트 : %d)----------\n", MAX_SIZE, q.count);
	char choice;
	do {
		if (!isEmpty(&q)) {
			int value = dequeue(&q);
			printf("Dequeued 요소: %d\n", value);
		}
		else {
			printf("더 이상 dequeue할 요소가 없습니다.\n");
			break;
		}
		printf("더 dequeue하시겠습니까? (y/n): ");
		scanf_s(" %c", &choice);
		printf("\n");
		printQueue(&q);
		printf("\n");
	} while ((choice == 'y' || choice == 'Y') && !isEmpty(&q));
	printQueue(&q);
	printf("큐는 공백 상태입니다 : (현재 데이터 크기 : %d) (현재 카운트 : %d)----------\n", MAX_SIZE, q.count);
	return 0;
}
