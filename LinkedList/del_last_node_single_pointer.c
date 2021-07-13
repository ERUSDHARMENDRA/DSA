#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void del_last(struct node *head)
{
    if (head == NULL)
    {
        printf("List is already empty");
    }
    else if (head->link == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *temp = head;
        while (temp->link->link != NULL)
        {
            temp = temp->link;
        }
        free(temp->link);
        temp->link = NULL;
    }
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    struct node *ptr = head;
    del_last(head);
    while (ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}