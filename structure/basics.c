/*                  STRUCTURE
- a strucutre is a user defined data type that can be used to group elements of different types into a single type. Eg:         
                struct student  {
                    char name[50];
                    int age;
                    int roll_no;
                    float marks;
                };

- just like variables, we can pass structure members as arguments to a function.


*/

#include <stdio.h>

//! pass by arguments
struct student
{
    char name[50];
    int age;
    int roll_no;
    float marks;
};

void print(char name[], int age, int roll, float marks)
{
    printf("%s\n %d\n %d\n %.2f\n", name, age, roll, marks); //precision upto 2 decimals
}

//! endof pass by arguments

// !pass by reference
struct charset
{
    char s;
    int i;
};

keyValue(char* s, int* i)
{
    printf("Enter a character & an integer:");
    scanf("%c %d", s, i);
}
//! endof pass by reference

int main()
{
    int j;
    struct student s1 = {"Nick", 16, 50, 72.5};
    print(s1.name, s1.age, s1.roll_no, s1.marks); //! passing struct as arguments i.e call by arguments

    struct charset cs;
    keyValue(&cs.s, &cs.i);  //! pass by reference
    printf("%c\n %d\n", cs.s, cs.i);

    return 0;
}
