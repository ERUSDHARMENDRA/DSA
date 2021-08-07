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

struct node* delFirstNode(struct node* head){
 struct node* temp = head;
 head=head->next;
 free(temp);
 temp=NULL;
 head->prev = NULL;
 return head;   
}

struct node* delLast(struct node* head){
struct node* temp = head;
struct node* temp2;
while(temp->next != NULL)
    temp = temp->next;
    temp2 = temp->prev;
    temp2->next = NULL;
    free(temp);
    return head;
}

struct node* delInter(struct node* head, int position){
    struct node* temp = head;
    struct node* temp2=NULL;

    if(position == 1){
        head = delFirstNode(head);
        return head;
    }

    while(position>1){
        temp = temp->next;
        position--;
    }
    
     if (temp->next == NULL){
        head = delLast(head);
     }
    else {
     temp2 =temp->prev;
     temp2->next = temp->next;
     temp->next->prev = temp2;
     free(temp);
     temp = NULL;
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

int main(){
    struct node* head = NULL;
    struct node* ptr;
     head = addToEmpty(head,14);
     head = addAtEnd(head, 45);
     head = addAtEnd(head, 23);

     printf("Before deletion\n");
     print(head);

     head = delInter(head,2);
     printf("After deletion\n");
     print(head);
     return 0;
}