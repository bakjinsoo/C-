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
	printf("����� ���� : ");
	scanf_s("%d", &num);
	int tmp = 0;
	for (int i = 0; i < num; i++)
	{
		printf("��� %d ������ : ", i);
		scanf_s("%d", &tmp);
		head = insert_first(head, tmp);
	}
	print_list(head);
	printf("\nŽ�� �� �Է� : ");
	scanf_s("%d", &num);
	int key = data_find(head, num);
	printf("ã�� �� �ε���: %d", key);
}