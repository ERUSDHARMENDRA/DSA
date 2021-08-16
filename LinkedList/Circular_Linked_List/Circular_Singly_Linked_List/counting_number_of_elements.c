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



int searchElement(struct node* tail, int element){
 struct node* temp;
 int index = 0;
 if (tail == NULL)
return -2;

temp=tail->next;
do
{
  if (temp->data == element)
  return index;
  temp=temp->next;
  index++;
  
} while (temp!=tail->next);
return -1;
 
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
    int element;
    tail = addToEmpty(34);
    tail = addAtBeg(tail, 65);
    tail = addAtEnd(tail, 60);
    tail = addAtEnd(tail, 55);

    printf("Enter the element: ");
    scanf("%d", &element);

   int index = searchElement(tail, 55);

    if (index == -1)
    printf("Element not found.\n");
    else if(index == -2)
    printf("List is empty\n");
    else
    printf("Element %d found at index %d\n", element, index);
    return 0;
}