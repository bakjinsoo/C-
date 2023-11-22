#include <stdio.h>
#include <stdlib.h>

// ���� ����Ʈ�� ��带 �����մϴ�.
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// ���ο� ��带 �����ϴ� �Լ��Դϴ�.
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// ���� ����Ʈ�� ��带 �����ϴ� �Լ��Դϴ�.
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

// �� ������ ���� ���� �����ϴ� �Լ��Դϴ�.
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

// �ִ� ���� �����ϴ� �Լ��Դϴ�.
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

// �� ������ �����ϴ� �Լ��Դϴ�.
void heapSort(Node** heap) {
    Node* curr = *heap;

    // �ִ� �� ����
    while (curr != NULL) {
        maxHeapify(*heap, curr);
        curr = curr->next;
    }

    // ��Ʈ ��带 ���ʴ�� �����Ͽ� ���ĵ� �迭 ����
    curr = *heap;
    int i = 0;
    while (curr != NULL) {
        (*heap)->data = curr->data;
        curr = curr->next;
        maxHeapify(*heap, *heap);
        i++;
    }
}

// ���� ����Ʈ�� ����ϴ� �Լ��Դϴ�.
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

    // ���� ����Ʈ�� ������ ����
    insertNode(&heap, 4);
    insertNode(&heap, 10);
    insertNode(&heap, 3);
    insertNode(&heap, 5);
    insertNode(&heap, 1);

    printf("���� �� ���� ����Ʈ: ");
    printList(heap);

    // �� ���� ����
    heapSort(&heap);

    printf("���� �� ���� ����Ʈ: ");
    printList(heap);

    return 0;
}
