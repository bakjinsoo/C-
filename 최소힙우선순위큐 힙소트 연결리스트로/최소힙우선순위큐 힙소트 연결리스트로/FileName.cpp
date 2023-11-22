#include <stdio.h>
#include <stdlib.h>

// 연결 리스트로 노드를 정의합니다.
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// 새로운 노드를 생성하는 함수입니다.
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// 연결 리스트에 노드를 삽입하는 함수입니다.
void insertNode(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    }
    else {
        Node* curr = *head;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = newNode;
    }
}

// 힙 정렬을 위한 힙을 구성하는 함수입니다.
void buildHeap(Node** heap, int data) {
    Node* newNode = createNode(data);
    if (*heap == NULL) {
        *heap = newNode;
    }
    else {
        Node* curr = *heap;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = newNode;
    }
}

// 최대 힙을 유지하는 함수입니다.
void maxHeapify(Node* heap, Node* parent) {
    Node* largest = parent;
    Node* left = parent->next;
    Node* right = (left != NULL) ? left->next : NULL;

    if (left != NULL && left->data > largest->data) {
        largest = left;
    }

    if (right != NULL && right->data > largest->data) {
        largest = right;
    }

    if (largest != parent) {
        int temp = largest->data;
        largest->data = parent->data;
        parent->data = temp;
        maxHeapify(heap, largest);
    }
}

// 힙 정렬을 수행하는 함수입니다.
void heapSort(Node** heap) {
    Node* curr = *heap;

    // 최대 힙 구성
    while (curr != NULL) {
        maxHeapify(*heap, curr);
        curr = curr->next;
    }

    // 루트 노드를 차례대로 추출하여 정렬된 배열 생성
    curr = *heap;
    int i = 0;
    while (curr != NULL) {
        (*heap)->data = curr->data;
        curr = curr->next;
        maxHeapify(*heap, *heap);
        i++;
    }
}

// 연결 리스트를 출력하는 함수입니다.
void printList(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

int main() {
    Node* heap = NULL;

    // 연결 리스트에 데이터 삽입
    insertNode(&heap, 4);
    insertNode(&heap, 10);
    insertNode(&heap, 3);
    insertNode(&heap, 5);
    insertNode(&heap, 1);

    printf("정렬 전 연결 리스트: ");
    printList(heap);

    // 힙 정렬 수행
    heapSort(&heap);

    printf("정렬 후 연결 리스트: ");
    printList(heap);

    return 0;
}
