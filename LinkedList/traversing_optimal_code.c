#include<stdio.h>
#include<stdlib.h>

//! TIME COMPLEXICITY IS O(1) i.e Big O of 1.

struct node {
    int data;
    struct node *link;
};

struct node* add_at_end(struct node *ptr, int data){
  //! CREATING A NODE 
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
//! ENDOF CREATING A NODE

//! UPDATING THE LINK PART OF THE PREVIOUS NODE
    ptr->link = temp;
//! ENDOF UPDATING THE LINK PART OF THE PREVIOUS NODE

    return temp;


}

int main(){
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *ptr = head;
    ptr = add_at_end(ptr, 98);
    ptr = add_at_end(ptr, 3);
    ptr = add_at_end(ptr, 67);

    ptr = head;
    
    while (ptr!=NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}