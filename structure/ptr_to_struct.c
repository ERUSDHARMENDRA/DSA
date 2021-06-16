//! RETURN POINTER TO A STRUCTURE FROM A FUNCTION

//! THERE ARE SOME BUGS


#include <stdio.h>
#include <stdlib.h>

struct point
{
    int x;
    int y;
};

struct point *fun(int a, int b)
{
    struct point *ptr = (struct point *)malloc(sizeof(struct point));
    ptr->x = a;
    ptr->y = b + 5;
    return ptr;
}

void print(struct point *ptr)
{
    printf("%d\n %d\n", ptr->x, ptr->y);
}

int main()
{
    struct point *ptr1, *ptr2;
    ptr1 = fun(2, 3);
    ptr2 = fun(6, 9);
    print(prt1);
    print(ptr2);

    //! pt1 & ptr2 can access the value of fun because of its data type
    printf("%d\n %d\n", ptr1->x, ptr1->y);
    printf("%d\n %d\n", ptr2->x, ptr2->y);

    free(ptr1);
    free(ptr2);

    return 0;
}