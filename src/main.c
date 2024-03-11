#include<stdio.h>
#include "linked-list/linked_list.h"
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
    print_list(head);
    return 0;
}