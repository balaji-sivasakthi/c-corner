#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void insert_data(struct Node** head_ref, int data){
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = *head_ref;
    (*head_ref) = new_node;
}
void print_linked_list(struct Node *node){
    while(node != NULL){
        printf("%d \n", node->data);
        node = node->next; 
    }
}

int main(){
    struct Node* head = NULL;
    // insert data in the linked list
    insert_data(&head, 1);
    insert_data(&head, 2);
    insert_data(&head, 3);
    insert_data(&head, 4);
    insert_data(&head, 5);
    insert_data(&head, 6);
    insert_data(&head, 7);
    // print linked list
    print_linked_list(head);
    return 0;
}