/* //! TRAVERSING A SINGLE LINKED LIST

 - //* Traversing a single linked list means visiting each node of a single linked list until the end node is reached

 ! TIME COMPLEXCITY CASES

 ! LINKED LIST                                                      ! ARRAY
 1. Counting of elements: 0(n)                             1. Counting of elements: 0(1)
 2. Printing of data: 0(n)                                 2. Printing the data: 0(n)
 
 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void print_data(struct node *head)
{
    if (head == NULL)
        printf("Linked List is empty");

    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("\nData: ");
        printf("%d", ptr->data);
        printf("\n");

        printf("Link: ");
        printf("%d", ptr->link);
        ptr = ptr->link;
    }
}

void count_of_nodes(struct node *head)
{
    int count = 0;
    if (head == NULL)
        printf("Linked List is empty");

    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {

        ptr = ptr->link;
        count++;
    }

    printf("\nCount of Nodes: ");
    printf("%d", count);
}

void add_at_end(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 20;
    current->link = NULL;
    head->link = current;

    add_at_end(head, 67);
    add_at_end(head, 52);
    count_of_nodes(head);
    print_data(head);

    return 0;
}