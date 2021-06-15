/*                                MALLOC

-malloc is a built-in function declared in the header file <stdlib.h>

-malloc is short name for "memory allocation" and is used to dynamically allocate a single large block of contiguous memory according to the size specified

-SYNTAX
    (void *)malloc(size_t size)

-malloc function simply allocates a memory block according to the size specified in the heap and on sucess it returns a pointer pointing to first byte of the allocated memory else returns NULL

-size_t is defined in <stdlib.h> as unsigned int(largest possible)

-malloc doesn't have idea of what it is pointing to 

-it merely allocates memory requested by the user without knowing the type of data to be stored inside the memory

-the void pointer can be typecasted to an appropriate type.
       eg: int *ptr = (int*)malloc(4)    //typecasting pointer to integer
        here, malloc allocates 4 bytes of memory in the heap and the address of the first byte is stored in pointer ptr       

*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    int i, n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));   //typecasting to integer
    
    if(ptr==NULL){
        printf("Memory not available");
        exit(1);
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", ptr + i);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d", *(ptr + i));
        printf("\n");
    }

        return 0;
}