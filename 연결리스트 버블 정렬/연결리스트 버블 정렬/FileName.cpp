#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	Node* link;
	int data;
}Node;


Node* insert_first(Node* h, int value) {
	Node* n = (Node*)malloc(sizeof(Node));
	n->data = value;
	n->link = h;
	h = n;
	return h;
}
Node* delete_first(Node* h)
{
	Node* removed;
	if (h == NULL)return NULL;
	removed = h;
	h = removed->link;
	free(removed);
	return h;
}
int get_length(Node* h) {
	Node* tmp = h;
	int length = 0;
	while (tmp != NULL) {
		length++;
		tmp = tmp->link;
	}
	return length;
}
void bubble_sort(Node* h)
{
	int length = get_length(h);
	printf("length : %d \n", length);
	int swap = 0;
	if (length <= 1) {
		return;
	}
	Node* currnode;
	Node* prevnode = NULL;
	for (int i = 0; i < length - 1; i++) {
		currnode = h;
		swap = 0;
		for (int j = 0; j < length - i - 1; j++) {
			printf("현재노드 : %d 다음 노드 : %d", currnode->data, currnode->link->data);
			if (currnode->data > currnode->link->data) {

				int tmp = currnode->data;
				currnode->data = currnode->link->data;
				currnode->link->data = tmp;
				swap = 1;
			}
			prevnode = currnode;
			currnode = currnode->link;
			printf("정렬\n");
		}
		if (swap == 0)break;
	}
}
void print_list(Node* h) {
	for (Node* p = h; p != NULL; p = p->link) {
		printf("%d->", p->data);
	}
}
int main()
{
	Node* node = NULL;
	node = insert_first(node, 5);
	node = insert_first(node, 3);
	node = insert_first(node, 7);
	node = insert_first(node, 9);
	node = insert_first(node, 1);
	print_list(node);
	printf("\n------------------");
	bubble_sort(node);
	print_list(node);
}