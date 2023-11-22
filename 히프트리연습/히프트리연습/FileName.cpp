#include<stdio.h>
#include<stdlib.h>
#define MAX_ELEMENT 200
typedef struct {
	int key;
}element;

typedef struct {
	element heap[MAX_ELEMENT];
	int heap_size;
}Heap;

Heap* create()
{
	return (Heap*)malloc(sizeof(Heap));
}

void init(Heap* h)
{
	h->heap_size = 0;
}

void insert_max_heap(Heap* h, element item)
{
	int i;
	i = ++(h->heap_size);

	while ((i != 1) &&(item.key > h->heap[i / 2].key)) {
		printf("insert heap ------ i : %d  item.key   %d      비교대상 key   %d\n", i, item.key, h->heap[i / 2].key);
		h->heap[i] = h->heap[i / 2];
		i /= 2;
	}
	printf("insert heap ------ i : %d  \n", i);
	h->heap[i] = item;
}
element delete_max_heap(Heap* h) {
	int parent, child;
	element item, temp;

	item = h->heap[1];
	temp = h->heap[(h->heap_size)--];
	parent = 1;
	child = 2;
	while (child <= h->heap_size) {
		if ((child < h->heap_size) && (h->heap[child].key) < h->heap[child + 1].key)
			child++;
		if (temp.key >= h->heap[child].key)break;
		h->heap[parent] = h->heap[child];
		parent = child;
		child *= 2;
	}
	h->heap[parent] = temp;
	return item;
}
int main()
{
	element e1 = { 10 }, e2 = { 5 }, e3 = { 30 };
	element e4 = { 52 }, e5 = { 7 }, e6 = { 1 }, e7 = { 22 }, e8 = {3};
	Heap* heap;
	heap = create();
	init(heap);

	insert_max_heap(heap, e1);
	insert_max_heap(heap, e2);
	insert_max_heap(heap, e3);
	insert_max_heap(heap, e4);
	insert_max_heap(heap, e5);
	insert_max_heap(heap, e6);
	insert_max_heap(heap, e7);
	insert_max_heap(heap, e8);
	for (int i = 1; i < 9; i++) {
		printf("%d번쨰 heap : %d \n", i,heap->heap[i]);
	}
}