/*                          FREE

- free() function is used to release dynamically allocated memory in heap
     SYNTAX: 
                  void free(ptr);

- the memory allocated in heap will not be released automatically after using the memory.The space remains    there and can't be used.
 
- it's the programmer responsibility to realease the memory after use.

*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int)); //typecasting to integer

    if (ptr == NULL)
    {
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

    free(ptr);
    
    return 0;
}