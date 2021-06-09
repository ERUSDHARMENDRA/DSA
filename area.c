#include<stdio.h>
#include<conio.h>

int main(){
   int l, b, a;
    printf("Enter the length ");
    scanf("%d", &l);

        printf("Enter the breadth");
    scanf("%d", &b);

     a = l * b;

    printf("Area of the room is: %d ", a);
    printf("\n");

    if (a>=2500)
    {
        printf("Auditorium");
    }
    else if(a>=500 && a<=2500){
        printf("Hall");
    }else if(a>150 && a<500){
        printf("Big Room");
    }else if(a<150) {
       printf("Small Room");
    }

    getch();
    return 0;
}
