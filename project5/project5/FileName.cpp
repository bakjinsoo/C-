#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
	struct Node* next;
	int key;
}Node;
typedef struct Heap {
	Node* heap;
	int heap_size;
}Heap;
