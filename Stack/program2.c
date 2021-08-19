//! Write a program to print all the prime factors of a number in descending order using a stack.

#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int stack[MAX];
int top = -1;


int isFull(){
    if (top==MAX-1)
  return 1;
  else 
  return 0;
}

int isEmpty(){
    if (top==-1)
    return 1;
    else 
    return 0;
}

void push(int n)
{
if(isFull()){
    printf("Stack Overflow\n");
    exit(1);
} 
top++;
stack[top]=n;
}

int pop()
{
    int val;
    if(isEmpty()){
        printf("Stack Underflow\n");
        exit(1);
    }
    val = stack[top];
    top--;
    return val;
}

void prime_fact(int num){
    int i =2;
    //! push all the prime factors of the number in stack
   while (num!=1)
   {
        while (num%i==0)
    {
        push(i);
        num=num/i;
    }
    i++;
   }
   //! pop all the prime factors of the number from stack
   printf("The prime factors of are the number %d are as follows:\n",num);
   while(top!=-1){
    printf("%d", pop());
   }
}

int main(){
    int number;
    printf("Enter a positive number: ");
    scanf("%d",&number);

    prime_fact(number);
    return 0;
}
