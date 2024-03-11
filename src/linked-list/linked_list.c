#include<stdio.h>
#include<stdlib.h>
#include "linked_list.h"

void insert_data(struct Node ** head_ref, int data){
    struct Node * new_data = (struct Node*) malloc(sizeof(struct Node));
    new_data->data = data;
    new_data->next = *head_ref;
    *(head_ref) = new_data;
}

void print_list(struct Node * head){
    while(head != NULL){
        printf("%d\n", head->data);
        head = head->next;
    }
}
