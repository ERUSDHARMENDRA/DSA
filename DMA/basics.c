/*                                STATIC MEMORY ALLOCATION
-memory allocated during compile time is called static memory
-the memory allocated is fixed and cannot be increased or decreased during runtime
-example:
int main(){
 int arr[5] = {1,2,3,4,5};
}

//                                       Problems faced by SMA

-> if you are allocating memory for an array during compile time then you have to fix the size at the time of declaration. Size is fixed and user cannot increase or decrease the size of the array at run time.i.e least flexible

->if the values stored by the user in the array at run time is less than the size specified then there will be wastage of memory

->if the values stored by the user in the array at run time is more than the size specified then the program may crash or misbehave

                                        //DYNAMIC MEMORY ALLOCATION 

-memory allocated at the time of execution is called is DMA.

-Heap is the segment of the memory where dynamic memory allocation takes place.

-Unlike stack where memory is allocated or deallocated in a defined order, heap is an area of memory where memory is allocated or deallocated without any order or randomly.

-there are certain built-in functions that can help in allocating or deallocating some memory space at runtime. Eg: malloc, calloc,realloc, free

-Pointer play very important role in DMA,

-ALLOCATED memory can only be accessed through POINTERS.

