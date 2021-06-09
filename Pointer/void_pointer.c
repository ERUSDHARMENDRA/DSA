#include<stdio.h>
#include<stdlib.h>

int main(){
    int n = 10;
    void *ptr = &n;

    printf("%d", *(int*)ptr);  //type-casted first and then dereferenced



    return 0;
}

/* syntax for malloc 
->malloc and calloc are used to allocate memory at runtime
-> malloc return a pointer 
-> malloc are built-in functions
void* malloc(size_t size);   

*/