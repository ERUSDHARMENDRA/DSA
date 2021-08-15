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

struct node *delLast(struct node *tail)
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

    while (temp->next != tail)
    {
        temp = temp->next;
    }
    temp->next = tail->next;
    free(tail);
    tail = temp;

    return tail;
}

void print(struct node *tail)
{

    if (tail == NULL)
    {
        printf("List is empty\n");
    }

    struct node *p = tail->next;
    do
    {
        printf("%d \n", p->data);
        p = p->next;
    } while (p != tail->next);
}

int main()
{
    struct node *tail = NULL;
    tail = createList(tail);
    print(tail);
    printf("After Deleting: \n");
    tail = delLast(tail);
    print(tail);

    return 0;
}