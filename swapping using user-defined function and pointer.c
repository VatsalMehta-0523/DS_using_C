#include <stdio.h>
#include <conio.h>

void swap(int *a , int *b);                          // function declaration

int main(){
    int a,b;
    printf("enter value for number1 : ");
    scanf("%d",&a);
    printf("enter value for number2 : ");
    scanf("%d",&b);
    swap(&a , &b );                                   // calling by address of a & b
 
    printf("\nswapped value for number1 is : %d\n", a);
    printf("swapped value for number2 is : %d\n", b);

    return 0 ;
}

void swap(int *a , int *b ){                          // fuction defination
    int temp = *a;
    *a  = *b ;
    *b = temp;
}
