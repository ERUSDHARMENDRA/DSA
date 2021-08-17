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
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = temp;
    return temp;
}

int main()
{
    int dataS = 34;
    int dataD = 45;
    struct node *tailS;
    struct node *tailD;
    tailS = addToEmpty(dataS);
    tailD = addAtBeg(tailS, dataD);

    printf("%d\n", tailS->data);
    printf("%d\n", tailD->data);

    return 0;
}