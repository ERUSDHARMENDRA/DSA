#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void del_pos(struct node **head, int position){  //! ** represents that it's pointer to a pointer
    struct node *current = *head;
    struct node *previous = *head;
    
    if (*head == NULL)  //! * helps to dereferencing the variable so that we can access the address i.e actual value 
    {
        printf("List is already empty !");
    }else if(position==1){
        *head = current->link;
        free(current);
        current = NULL;
    }else{
        while (position !=1)
        {
            previous = current;
            current = current->link;
            position--;
        }
        previous->link = current->link;
        free(current);
        current = NULL;
    }
}

int main()
{
    int position = 2;
    struct node *head = malloc(sizeof(struct node));
    struct node *ptr = head;
    del_pos(&head, position);
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}