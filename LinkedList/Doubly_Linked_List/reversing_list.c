#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};


struct node* addToEmpty(struct node *head, int data)
{

    struct node* temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}

struct node* addAtEnd(struct node *head, int data)
{
    struct node *temp, *tp;
    temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    tp = head;
    while (tp->next != NULL)
    {
        tp = tp->next;
        tp->next = temp;
        temp->prev = tp;
    }

    return head;
}

void print(struct node* head){
    struct node* ptr=head;
    while(ptr != NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}


struct node* reverse(struct node* head){
struct node* ptr1=head;
struct node* ptr2 = ptr1->next;

ptr1->next = NULL;
ptr1->prev = ptr2;

while (ptr2 != NULL){
ptr2->prev = ptr2->next;
ptr2->next = ptr1;
ptr1 = ptr2;
ptr2 = ptr2->prev;
}
head = ptr1;
return head;

}

int main(){
struct node* head = NULL;
    struct node* ptr;
     head = addToEmpty(head,14);
     head = addAtEnd(head, 45);
     head = addAtEnd(head, 23);

     printf("Before Reversing the List: \n");
     print(head);

     head = reverse(head);
     printf("After Reversing the List: \n");
     print(head);

    return 0;
}


