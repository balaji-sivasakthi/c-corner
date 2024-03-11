#ifndef LINKED_LIST_H
#define LINKED_LIST_H
struct Node {
    int data;
    struct Node *  next;
};
void insert_data(struct Node ** head_ref, int data);
void print_list(struct Node * head);
#endif // LINKED_LIST_H

