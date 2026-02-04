#include <stdio.h>

int len(char arr[]);                                 // function declaration

int main(){
    char arr[20];
    printf("enter your string : ");
    gets(arr);                                       // function calling
    
    int n = len(arr);
    printf("length of your string is %d",n);
    return 0;
}

int len(char arr[]){                                 // function defination
    int n= 0 ;                                       // counter variable
    for (int i = 0 ; arr[i] ; i++){
        n++;
    }
    return n;
}
