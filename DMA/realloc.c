/*                       REALLOC 
-realloc() function is used to change the size of the memory block without losing the old data.
          SYNTAX: 
                  void *realloc(void *ptr, size_t newSize);
                  *on failure realloc returns NULL

-Eg.
         - int *ptr = (int *)malloc(sizeof(int));
         - ptr = (int *)realloc(ptr, 2*sizeof(int)); //will allocate memory space of 2*sizeof(int)= 8 bytes
               will also move the contents of old block to a new block nad data of the old block isn't lost
          ! we may lose the data if the new size is smaller than the old size
          ! newly allocate bytes are uninitialised
*/      

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    int i,n=2;
    int *ptr = (int *)malloc(n * sizeof(int));   //typecasting to integer
    
  
    if(ptr==NULL){
        printf("Memory not available !");
        exit(1);
    }

    for (i = 0; i <2; i++)
    {
        printf("Enter 2 integers: ");
        scanf("%d", ptr + i);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d", *(ptr + i));
        printf("\n");
    }

    // ! memory allocated for 2 more integers
    ptr = (int *)realloc(ptr, 4 * sizeof(int)); //!consider previously allocated memory as well
    
    if(ptr==NULL){
        printf("Memory not available !");
        exit(1);
    }

    for (i = 2; i <4; i++) //!store in newly allocated memory hence i=2
    {
        printf("Enter 2 more integers: ");
        scanf("%d", ptr + i);
    }

    
    for (i = 0; i < 4; i++)
    {
        printf("%d", *(ptr + i));
        printf("\n");
    }


    return 0;
}
