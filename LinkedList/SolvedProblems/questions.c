//! Problem 1- Consider an implementation of unsorted singly linked list.Suppose it has its representation with a head and a tail pointer(i.e pointers to the first and last nodes of the linked list). Given the representation, which of the following operation can not be implemented on O(1) time ?

/* 

a) insertion at the front of the linked list  
b) insertion at the end of the linked list 
c) deletion at the front node of the linked list
d) deletion at the last node of the linked list  //! (correct answer)

Explanation: In order to delete the last node of the linked list, we need the address of the second last node. We only have a pointer to the last node. Therefore, we need to traverse the list in the order to get the address of the second last node of the list. This will take 0(n) time.
*/

//! ISRO CS - 2014
//! Problem 1 - Consider a single linked list where F and L are pointers to first and last elements respectively of the linked list. The time for performing which of the given operations depends on the length of the linked list(means which of the given operations has O(n) time complexicity if there are n nodes in the list ) ? 

/*
a) delete the first element of the list
b) interchange the first two elements of the list
c) delete the last element of the list //! correct answer 'cause of traversing takes orderof times
d) add an element at the end of the list


*/

//! GATE CS - 2010
//! Problem 3 - The following C function takes a singly-linked list as input arguement.It modifies the list by moving the last element to the front of the list and returns the modified list. Some part of the code is left blank.

typedef struct node{
    int value;
    struct node *next;
} Node;

Node *move_to_front(Node *head){
    Node *p, *q;
    if ((head == NULL ||(head->next==NULL)))
        return head;
    q = NULL;
    p = head;
    while (p->next !=NULL)
    {
        q = p;
        p = p->next;
    }
    // ! fill_the_blank_space_here
    return head;
}

/*
//! Choose the correct alternative to replace the blank line

a) q=NULL;p->next= head;head=p;
b) q->next=NULL;head=p;p->next=head;
c) head=p;p->next=q;q->next=NULL;
d) q->next=NULL;p->next = head; head=p; //! correct answer and please note option b is not correct


*/


