/*        //! STRUCTURE VARIABLE AS AN ARGUMENT

- instead of passing structure members individually, it is a good practice to pass a structure variable as an argument

- unlike arrays, name of the structure variables are not pointers

*/

#include <stdio.h>

struct point
{
    int x;
    int y;
};

void print(struct point p)
{
    printf("%d\n %d\n", p.x, p.y);
}

int main()
{
    struct point p1 = {23, 45};
    struct point p2 = {56, 90};
    print(p1);  //*call by value
    print(p2);  //*call by value

    return 0;
}