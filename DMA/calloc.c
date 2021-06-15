/*
                       CALLOC
- calloc() function is used to dynamically allocate multiple blocks of memory.
-it is different from malloc in two ways
         * calloc() needs two arguements instead of just one
           SYNTAX: void *calloc(size_t n, size_t size);
                   Eg: int *ptr = (int *)calloc(10, sizeof(int)); //10 blocks of memory
                      
                      * TO DO: equivalent malloc call is 
                      int *ptr = (int *)malloc(10*sizeof(int));
            
          * Memory allocated by calloc is initialized to zero 
                -while in the case of malloc, memory is allocated is initialized with some garbage value.
Note: 
*malloc and calloc both returns NULL when sufficient memory is not available in heap.
*calloc = clear allocation & malloc = memory allocation


*/