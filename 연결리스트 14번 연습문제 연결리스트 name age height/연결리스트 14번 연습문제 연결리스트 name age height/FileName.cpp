#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Node {
    Node* next;
    int age;
    double height;
    char* name;
}Node;
Node* insert_first(Node* head, int a, double b, char* c) {

    Node* p = (Node*)malloc(sizeof(Node));
    p->age = a;
    p->height = b;
    p->name = _strdup(c);

    p->next = head;
    head = p;
    return p;
}
Node* delete_first(Node* head) {
    Node* tmp;
    if (head == NULL)return NULL;
    tmp = head;
    head = tmp->next;
    free(tmp);
    return head;
}
int get_length(Node* head) {
    int length = 0;
    Node* tmp = head;
    while (tmp != NULL) {
        tmp = tmp->next;
        length++;
    }
    return length;
}
void bubble_sort(Node* head)
{
    int length = get_length(head);
    if (length <= 1)return;
    Node* currnode;
    Node* prevnode = NULL;
    int swap = 0;
    for (int i = 0; i < length - 1; i++) {
        currnode = head;
        swap = 0;
        for (int j = 0; j < length - i - 1; j++) {
            if (currnode->age > currnode->next->age) {
                int tmp_age = currnode->age;
                double tmp_height = currnode->height;
                char* tmp_name = currnode->name;
                currnode->age = currnode->next->age;
                currnode->height = currnode->next->height;
                currnode->name = currnode->next->name;
                currnode->next->age = tmp_age;
                currnode->next->height = tmp_height;
                currnode->next->name = tmp_name;
                swap = 1;
            }
            prevnode = currnode;
            currnode = currnode->next;
        }
        if (swap == 0)break;
    }

}
void print_list(Node* head) {
    for (Node* p = head; p != NULL; p = p->next) {
        printf("age : %d height : %f name : %s\n", p->age, p->height, p->name);

    }
}
int main()
{
    Node* head = NULL;
    char c[100] = "kim";
    head = insert_first(head, 34, 1.7, c);
    strcpy_s(c, "akak");
    head = insert_first(head, 27, 1.2, c);
    strcpy_s(c, "son");
    head = insert_first(head, 48, 1.4, c);
    strcpy_s(c, "park");
    head = insert_first(head, 30, 1.3, c);
    strcpy_s(c, "lee");
    head = insert_first(head, 17, 1.8, c);
    print_list(head);
    printf("\n--------------\n");
    bubble_sort(head);
    print_list(head);

}