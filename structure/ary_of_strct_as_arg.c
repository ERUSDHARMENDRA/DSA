//! PASSING ARRAY OF STRUCTURES AS ARGUMENT

//! THERE ARE SOME BUGS

#include <stdio.h>
#include <stdlib.h>

struct abc
{
    int x;
    int y;
};

void print(struct point arr[])
{
    int i;
    for (i = 0; i < 2;i++)
        printf("%d\n %d\n", arr[i].x, arr[i].y);
}

int main()
{
    struct point arr[2] = {{1, 2}, {3, 4}};

    print(arr);
    free(arr);

    return 0;
}