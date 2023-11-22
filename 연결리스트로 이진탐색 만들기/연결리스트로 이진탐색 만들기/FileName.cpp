#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX_SIZE 10
typedef struct Node {
	struct Node* link;
	int data;
}Node;

Node* insert_first(Node* head, int value)
{
	Node* n = (Node*)malloc(sizeof(Node));
	n->data = value;
	n->link = head;
	head = n;
	return head;
}

Node* delete_first(Node* head) {
	Node* removed;
	if (head == NULL)return NULL;
	removed = head;
	head = removed->link;
	free(removed);
	return head;
}

void print_map(Node* head, int index) {
	Node* p = head;
	for (int i = 0; i < index; i++) {

		printf("%d ->", p->data);
		p = p->link;
	}

	printf("\n");
}

void sort(Node* head) {
	for (Node* p = head; p != NULL; p = p->link)
	{
		for (Node* q = p->link; q != NULL; q = q->link)
		{
			if (p->data > q->data) {
				int tmp = p->data;
				p->data = q->data;
				q->data = tmp;
			}
		}
	}
}


int get_value_at_index(Node* head, int index) {
	Node* current = head;
	int count = 0;

	// ���� ����Ʈ�� ��ȸ�ϸ鼭 �ε��� ��ȣ��ŭ �̵�
	while (current != NULL) {
		if (count == index) {
			// ���� ����� �ε����� ���ϴ� �ε����� ��ġ�ϴ� ���, ������ ��ȯ
			return current->data;
		}

		// ���� ���� �̵�
		current = current->link;
		count++;
	}

	// ���ϴ� �ε����� �ش��ϴ� ��带 ã�� ���� ���, -1 �Ǵ� �ٸ� ���� ���� ��ȯ�� �� �ֽ��ϴ�.
	return -1;
}
int binary_search(Node* head, int key, int low, int high)
{
	int middle;
	int data;
	while (low <= high) {
		middle = (low + high) / 2;
		printf("%d \n", middle);
		data = get_value_at_index(head, middle);
		if (key == data)
			return middle;
		else if (key > data)
			low = middle + 1;
		else
			high = middle - 1;
	}
	return -1;
}
int main()
{
	srand(time(NULL));

	Node* head = NULL;

	int data;
	for (int i = 0; i < MAX_SIZE; i++) {
		data = rand() % 11;
		printf("%d \n", data);
		head = insert_first(head, data);
	}
	sort(head);
	print_map(head, MAX_SIZE);

	int middle = binary_search(head, 10, 0, MAX_SIZE);
	if (middle != -1) {
		printf("ã�� �ε��� = %d", middle);
	}
	else
		printf("��ã��");


}