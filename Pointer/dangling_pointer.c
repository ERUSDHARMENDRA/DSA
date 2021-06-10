// A dangling pointer points to non-existing memory location 

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int* fun(){
    int num = 10;
    return &num;
}

int main(){
    //example 1
    //malloc allocates memory dynamically and after allocating it returns the first byte of memory
    int *ptr1 = (int *)malloc(sizeof(int));
    free(ptr1); //deallocate the memory allocated by malloc
    ptr1 = NULL; //now ptr is no more dangling
    //end of example 1 

    //example 2
    int *ptr2 = NULL;
    ptr2 = fun();
    printf("%d", *ptr2);

    //end of example 2



    return 0;
}