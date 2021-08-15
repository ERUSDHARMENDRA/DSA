#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *addToEmpty(int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = temp;
    return temp;
}

struct node *addAtBeg(struct node *tail, int data)
{
    struct node* newP = malloc(sizeof(struct node));
    newP->data = data;
    newP->next = tail->next;
    tail->next = newP;
    return tail;
}

struct node *addAtEnd(struct node *tail, int data)
{
    struct node* newP = malloc(sizeof(struct node));
    newP->data = data;
    newP->next = NULL;
     newP->next = tail->next;
    tail->next = newP;
    return tail;
}



void print(struct node* tail){
    struct node* p = tail->next;
    do
    {
        printf("%d \n", p->data);
        p=p->next;
    } while (p!=tail->next);
    
}

int main()
{
    struct node *tail;
    tail = addToEmpty(34);
    tail = addAtBeg(tail, 65);
    tail = addAtEnd(tail, 60);
    tail = addAtEnd(tail, 55);

    print(tail);

    return 0;
}