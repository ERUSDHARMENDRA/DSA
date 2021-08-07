#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node* del_list(struct node *head){
    struct node *temp = head;
    while (temp!=NULL)
    {
        temp = temp->link;
        free(head);
        head = temp;
    }
    return head;
}

int main(){
    struct node *head = malloc(sizeof(struct node));
    head = del_list(head);
    if (head == NULL)
    {
        printf("Linked List Deleted Sucessfully");
    }

    return 0;
}