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
		printf("ť�� �������� �Ǿ����ϴ�. %d\n", item);
		return;
	}


	q->data[q->rear] = item;
	q->rear = (q->rear + 1) % MAX_SIZE;
	q->count++;
}

int dequeue(CircleQueue* q) {
	if (isEmpty(q)) {
		printf("ť�� ������ϴ�.\n");
		exit(1);
	}

	int removedValue = q->data[q->front];
	q->front = (q->front + 1) % MAX_SIZE;
	q->count--;

	return removedValue;
}

void printQueue(CircleQueue* q) {
	if (isEmpty(q)) {
		printf("ť�� ������ϴ�.\n");
		return;
	}
	printf("(Queue->front : %d, Queue->rear : %d) (���� ī��Ʈ : %d): ", q->front, q->rear, q->count);
	printf("���� ť ��� : ");
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
		printf("������ �Է� : \n");
		scanf_s("%d", &data);

		if (!isFull(&q)) {
			enqueue(&q, data);
		}
		else {
			printf("ť�� ��ȭ�����Դϴ�.\n");
		}
		printQueue(&q);
	} while (!isFull(&q));
	printf("ť�� ��ȭ�����Դϴ� : (���� ������ ũ�� : %d) (���� ī��Ʈ : %d)----------\n", MAX_SIZE, q.count);
	char choice;
	do {
		if (!isEmpty(&q)) {
			int value = dequeue(&q);
			printf("Dequeued ���: %d\n", value);
		}
		else {
			printf("�� �̻� dequeue�� ��Ұ� �����ϴ�.\n");
			break;
		}
		printf("�� dequeue�Ͻðڽ��ϱ�? (y/n): ");
		scanf_s(" %c", &choice);
		printf("\n");
		printQueue(&q);
		printf("\n");
	} while ((choice == 'y' || choice == 'Y') && !isEmpty(&q));
	printQueue(&q);
	printf("ť�� ���� �����Դϴ� : (���� ������ ũ�� : %d) (���� ī��Ʈ : %d)----------\n", MAX_SIZE, q.count);
	return 0;
}
