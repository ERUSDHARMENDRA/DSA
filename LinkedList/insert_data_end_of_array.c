#include<stdio.h>
#include<stdlib.h>

int add_at_end(int a[], int freePos, int data){
    a[freePos] = data;
    freePos++;
    return freePos;
}

int main() {
    int a[10];
    int i, n, freePos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for ( i = 0; i < freePos; i++)
        scanf("%d", &a[i]);
    freePos = n;
    freePos = add_at_end(a, freePos, 65);

    for ( i = 0; i < freePos; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}