#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL;

    //useful for handling errors when using malloc function
    int *ptr1;
    ptr1 = (int *)malloc(2 * sizeof(int));
    if (ptr1 == NULL)
    {
        printf("Memory could not be allocated");
    }
    else
    {
        printf("Memory allocated sucessfully");
    }
    //endof useful for handling errors when using malloc function

    return 0;
}

/*uses of null pointer
->it is used to initialize a pointer when that pointer isn't assigned any valid memory address
->useful for handling errors when using malloc function

//facts about NULL pointer
->the value of NULL is 0.We can either use NULL or 0 but this 0 is written in context of pointers and is not equivalent to the integer 0.

*/