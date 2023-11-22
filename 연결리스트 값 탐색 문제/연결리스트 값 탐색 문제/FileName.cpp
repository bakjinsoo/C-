#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data;
	Node* link;
}Node;
Node* insert_first(Node* head, int value) {
	Node* p = (Node*)malloc(sizeof(Node));
	p->data = value;
	p->link = head;
	head = p;
	return p;
}
Node* delete_first(Node* head) {
	Node* tmp;
	if (head == NULL)return NULL;
	tmp = head;
	head = tmp->link;
	free(tmp);
	return head;
}
int data_find(Node* head, int value) {
	Node* tmp = head;
	int index = 0;
	while (tmp != NULL) {
		tmp = tmp->link;
		index++;
		if (tmp->data == value) {
			return index;
			break;
		}
	}
	return index;
}
void print_list(Node* head) {
	for (Node* p = head; p != NULL; p = p->link) {
		printf("%d->", p->data);
	}
	printf("\n");
}
int main() {
	Node* head = NULL;
	int num = 0;
	printf("노드의 개수 : ");
	scanf_s("%d", &num);
	int tmp = 0;
	for (int i = 0; i < num; i++)
	{
		printf("노드 %d 데이터 : ", i);
		scanf_s("%d", &tmp);
		head = insert_first(head, tmp);
	}
	print_list(head);
	printf("\n탐색 값 입력 : ");
	scanf_s("%d", &num);
	int key = data_find(head, num);
	printf("찾는 값 인덱스: %d", key);
}