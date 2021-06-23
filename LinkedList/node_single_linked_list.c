// ! HOW TO CREATE A NODE OF A SINGLE LINKED LIST

/* // * Self Referential Structure is a structure which contains a pointer to a structure of same type

          struct abc {
              int a;
              char b;
              struct abc *self;
          };

 //*! WE WILL USE SELF REFERENTIAL STRUCTURE FOR CREATING A NODE OF THE SINGLE LINKED LIST

*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int roll;
    char name[15];
    char stdncode[5];
    int class;
    int rank;
    struct node *link; //! here, 'link' is a pointer to struct 'node'. In single linked list there should be only one pointer
};

int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node)); //!TYPECASTING
    head->roll = 8;
    head->class = 7;
    head->rank = 2;
    head->stdncode = "AGENT";
    head->name = "ERUS";

    printf("%d", head->class);
    printf("%s", head->name);
    printf("%d", head->roll);
    printf("%s", head->stdncode);
    printf("%d", head->rank);

    
    return 0;
}