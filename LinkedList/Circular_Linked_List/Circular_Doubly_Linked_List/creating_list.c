#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *addToEmpty(int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = temp;
    temp->data = data;
    temp->next = temp;
    return temp;
}

struct node *addAtBeg(struct node *tail, int data)
{
    struct node* newP = addToEmpty(data);
    if(tail==NULL)
    return newP;
    else{
    struct node *temp = tail->next;
    
    newP->prev = tail;
    newP->next = temp;
    temp->prev=newP;
    tail->next=newP;
      return tail;
    }
}

void print(struct node* tail){
    if(tail==NULL)
    printf("List is empty\n");
    else{
        struct node* temp =tail->next;
        do
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        } while (temp != tail->next);
        
    }
    printf("\n");
}

int main()
{
    struct node* tail=NULL;
    tail = addToEmpty(45);
    tail = addAtBeg(tail,23);
    print(tail);
    return 0;
}