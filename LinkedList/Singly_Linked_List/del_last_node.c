//! TIME COMPLEXICITY IS: O(n) whereas for array its O(1)

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *del_last(struct node *head){
    if(head==NULL){
        printf("List is already empty !");
    }else if(head->link==NULL){
        free(head);
        head = NULL;
    }else {
        struct node *temp = head;
        struct node *temp2 = head;
        while (temp->link !=NULL)
        {
            temp2 = temp;
            temp = temp->link;
        }
        temp2->link = NULL;
        free(temp);
    }
    return head;
}

int main(){
    struct node *head = malloc(sizeof(struct node));
    struct node *ptr = head;
    ptr = head;

    while (ptr!=NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->link;
    }

    head = del_last(head);
    return 0;
}