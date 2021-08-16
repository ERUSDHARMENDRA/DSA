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
    struct node *newP = malloc(sizeof(struct node));
    newP->data = data;
    newP->next = tail->next;
    tail->next = newP;
    return tail;
}

struct node *addAtEnd(struct node *tail, int data)
{
    struct node *newP = malloc(sizeof(struct node));
    newP->data = data;
    newP->next = NULL;
    newP->next = tail->next;
    tail->next = newP;
    return tail;
}

struct node *createList(struct node *tail)
{
    int i, n, data;
    printf("Enter the number of nodes of the Linked List: ");
    scanf("%d", &n);

    if (n == 0)
        return tail;

    printf("Enter the element 1: ");
    scanf("%d", &data);

    tail = addToEmpty(data);

    for (i = 1; i < n; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &data);
        tail = addAtEnd(tail, data);
    }

    return tail;
}

struct node *delatPos(struct node *tail, int pos)
{
    if (tail == NULL)
        return tail;
    struct node *temp = tail->next;
    if (tail->next == tail)
    {
        free(tail);
        tail = NULL;
        return tail;
    }
    while (pos > 2)
    {
        temp = temp->next;
        pos--;
    }

    struct node *temp2 = temp->next;
    temp->next = temp2->next;
    //Handling the case of deleting last node
    if (temp2 == tail)
        tail = temp;
    free(temp2);
    temp2 = NULL;

    return tail;
}

void print(struct node *tail)
{
    if (tail == NULL)
        printf("List is empty\n");
    else
    {
        struct node *p = tail->next;
        do
        {
            printf("%d \n", p->data);
            p = p->next;
        } while (p != tail->next);
    }
}

int main()
{
    struct node *tail;
    tail = addToEmpty(34);
    tail = addAtBeg(tail, 65);
    tail = addAtEnd(tail, 60);
    tail = addAtEnd(tail, 55);
    printf("List before deletion of first node: \n");
    print(tail);
    tail = delatPos(tail, 3);
    printf("List after deletion of intermediate node: \n");
    print(tail);

    return 0;
}