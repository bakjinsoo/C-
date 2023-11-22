#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 200

typedef struct {
	int key;
}element;

typedef struct {
	element data[MAX_SIZE];
	int heap_size;
}Heap;

void init(Heap* h) {
	h->heap_size = 0;
}

Heap* create() {
	return (Heap*)malloc(sizeof(Heap));
}

void insert_min_heap(Heap* h, element item)
{
	int i;
	i = ++(h->heap_size);
	while ((i != 1) && (item.key < h->data[i / 2].key)) {
		h->data[i] = h->data[i / 2];
		i /= 2;
	}
	h->data[i] = item;
}

element delete_min_heap(Heap* h) {
	int parent, child;
	element item, temp;
	item = h->data[1];
	temp = h->data[(h->heap_size)--];
	parent = 1;
	child = 2;
	while (child <= h->heap_size) {
		if ((child < h->heap_size) && (h->data[child].key) > (h->data[child + 1].key)) {
			child++;
		}
		if (temp.key <= h->data[child].key)break;

		h->data[parent] = h->data[child];
		parent = child;
		child *= 2;
	}
	h->data[parent] = temp;
	return item;
}

int main()
{
	Heap* heap;
	heap = create();
	init(heap);

	element e1 = { 10 }, e2 = { 1 }, e3 = { 7 }, e4 = { 4 }, e5 = { 52 }, e6 = { 3 }, e7 = { 17 }, e8 = { 8 };
	element e9, e10, e11;
	insert_min_heap(heap,e1);
	insert_min_heap(heap, e2);
	insert_min_heap(heap, e3);
	insert_min_heap(heap, e4);
	insert_min_heap(heap, e5);
	insert_min_heap(heap, e6);
	insert_min_heap(heap, e7);
	insert_min_heap(heap, e8);

	for (int i = 1; i < heap->heap_size; i++) {
		printf("%d¹øÂ° heap -> %d \n",i, heap->data[i].key);
	}
}