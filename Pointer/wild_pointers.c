//wild pointers- also known as uninitialized pointers 
//these pointers usually point to some arbitrary memory location and may cause a program to crash or misbehave 
//

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
       //example 1
       int *p;   //this is wild pointer because it is not initialized 
       *p = 10;
       //endof example1

       //how to avoid wild pointer
       //intialize them with the address of known variable
       int var = 10;
       int *p1;
       p1 = &var;
       //endof intialize them with the address of known variable

       //explicitly allocate the memory and put the values in the allocated memory
       int *p2 = (int *)malloc(sizeof(int));
       *p2 = 10;
       free(p2);
       //endof explicitly allocate the memory and put the values in the allocated memory

       return 0;
}

