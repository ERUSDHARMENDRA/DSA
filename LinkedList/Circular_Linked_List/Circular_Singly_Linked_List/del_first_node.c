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

struct node *delFirst(struct node *tail)
{
    if (tail == NULL)
        return tail;
    if (tail->next == tail)
    {
        free(tail);
        tail = NULL;
        return tail;
    }
    struct node *temp = tail->next;
    tail->next = temp->next;
    free(temp);
    temp = NULL;
    return tail;
}

void print(struct node *tail)
{
    struct node *p = tail->next;
    do
    {
        printf("%d \n", p->data);
        p = p->next;
    } while (p != tail->next);
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
    tail = delFirst(tail);
    printf("List after deletion of first node: \n");
    print(tail);

    return 0;
}