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

void print(struct node* tail){
    struct node* p = tail->next;
    do
    {
        printf("%d ", p->data);
        p=p->next;
    } while (p!=tail->next);
    
}

int main()
{
    int dataS = 34;
    int dataD = 45;
    struct node *tail;
    tail = addToEmpty(dataS);
    tail = addAtBeg(tail, dataD);

    print(tail);

    return 0;
}