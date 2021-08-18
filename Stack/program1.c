//! Write a program to implement a stack in an array stack_arr[] using stack_arr[0] as the top of the element.

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack_arr[MAX];
int first;

int isFull(){
    if (first==MAX-1)
  return 1;
  else 
  return 0;
}

int isEmpty(){
    if (first==-1)
    return 1;
    else 
    return 0;
}

void push(int data)
{
    int i;
    first += 1;
    for (i = first; i > 0; i--)
    {
        stack_arr[i] = stack_arr[i - 1];
        stack_arr[0] = data;
    }
}

int pop()
{
    int i, value;
    value = stack_arr[0];
    for (i = 0; i < first; i++)
        stack_arr[i] = stack_arr[i + 1];
    first -= 1;
    return value;
}

int peek(){
    if (isEmpty())
    {
       printf("Stack Underflow\n");
       exit(1);
    }
    return stack_arr[0];
}

void print()
{
    int i;
    if (first == -1)
    {
        printf("Stack Overflow \n");
        exit(1);
    }
    for (i = 0; i <= first; i++)
        printf("%d ", stack_arr[i]);
    printf("\n");
}

int main()
{
  int choice, data;
  while (1)
  {
     printf("\n");
     printf("1. Push\n");
     printf("2. Pop\n");
     printf("3. Print the top Elements\n");
     printf("4. Print all the elements of the Stack\n");
     printf("5. Exit\n");
     printf("Enter your choice: ");
     scanf("%d", &choice);
  }

  switch (choice)
  {
  case 1:
     printf("Enter the elements to be pushed");
     scanf("%d", &data);
     push(data);
      break;

  case 2:
  data = pop();
  printf("Deleted element is %d\n", data);
  break;

  case 3:
  printf("Top element is %d\n", peek());
  break;

  case 4:
  print();
  break;

  case 5:
  exit(1);
  
  default:
  printf("Invalid choice\n");
      break;
  }
  

    return 0;
}