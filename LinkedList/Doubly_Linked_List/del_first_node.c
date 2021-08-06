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
    struct node *temp = malloc(sizeof(struct node));
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

struct node* delFirstNode(struct node* head){
 struct node* temp = head;
 head=head->next;
 free(temp);
 temp=NULL;
 head->prev = NULL;
 return head;   
}

void print(struct node* head){
    struct node* ptr = head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

int main(){
struct node* head =NULL;
struct node* ptr;
head = addToEmpty(head,34);
head = addAtEnd(head, 32);
head = addAtEnd(head, 39);

printf("Before Deletion: \n");
print(head);

head = delFirstNode(head);
printf("After Deletion: \n");
print(head);

return 0;

}