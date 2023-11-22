#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 200
typedef struct {
	int key;
}element;
typedef struct Heap {
	element heap[MAX_SIZE];
	int heap_size;
}Heap;
Heap* create() {
	return(Heap*)malloc(sizeof(Heap));
}
void init(Heap* h) {
	h->heap_size = 0;
}
void insert_min_heap(Heap* h, element item) {
	int i;
	i = ++(h->heap_size);
	while ((i != 1) && (item.key < h->heap[i / 2].key))
	{
		h->heap[i] = h->heap[i / 2];
		i /= 2;
	}
	h->heap[i] = item;
}
element delete_min_heap(Heap* h) {
	int child, parent;
	element temp, item;
	child = 2;
	parent = 1;
	item = h->heap[1];
	temp = h->heap[(h->heap_size)--];
	while (child <= h->heap_size)
	{
		if ((child < h->heap_size) && (h->heap[child].key) > (h->heap[child + 1].key)) {
			child++;
		}
		if (temp.key <= h->heap[child].key)break;

		h->heap[parent] = h->heap[child];
		parent = child;
		child *= 2;
	}
	h->heap[parent] = temp;
	return item;
}
void heap_sort(element a[], int n) {
	int i;
	Heap* h;
	h = create();
	init(h);
	for (i = 0; i < n; i++) {
		insert_min_heap(h, a[i]);
	}
	for (i = 0; i < n; i++) {
		a[i] = delete_min_heap(h);
	}
	free(h);
}
#define SIZE 8
int main()
{
	element list[SIZE] = { 23,56,11,9,56,99,27,34 };
	heap_sort(list, SIZE);
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", list[i].key);
	}
	printf("\n");
}