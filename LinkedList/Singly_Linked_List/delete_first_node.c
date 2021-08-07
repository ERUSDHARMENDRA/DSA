//! TIME COMPLEXICITY IS: O(1) WHERE AS IN CASE OF ARRAY IT'S O(n)


#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *del_first(struct node *head)
{
    if (head == NULL)
    {
        printf("List is already empty !");
    }
    else
    {
        struct node *temp = head;
        head = head->link;
        free(temp);
    }
    return head;
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    struct node *ptr = head;
    head = del_first(head);
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}