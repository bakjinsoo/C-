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

	// 연결 리스트를 순회하면서 인덱스 번호만큼 이동
	while (current != NULL) {
		if (count == index) {
			// 현재 노드의 인덱스가 원하는 인덱스와 일치하는 경우, 데이터 반환
			return current->data;
		}

		// 다음 노드로 이동
		current = current->link;
		count++;
	}

	// 원하는 인덱스에 해당하는 노드를 찾지 못한 경우, -1 또는 다른 오류 값을 반환할 수 있습니다.
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
		printf("찾은 인덱스 = %d", middle);
	}
	else
		printf("못찾음");


}