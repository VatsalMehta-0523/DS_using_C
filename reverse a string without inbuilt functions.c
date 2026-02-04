#include <stdio.h>

char arr[50] , rev1[50] ;

int len(char arr[]);                                 // function declaration

int main(){

    printf("enter your name : ");
    gets(arr);                                       // function calling

    int n = len(arr);
    //printf("length of your name is %d",n);

        int i,j;
    for ( i = 0 , j =  n-1 ; arr[i], j >= 0; i++,j--){
        rev1[i] = arr[j];
    }rev1[i] = '\0';

    printf("reverse of given string is %s ",rev1);


    return 0;
}

int len(char arr[]){                                 // function defination
    int n= 0 ;                                       // counter variable
    for (int i = 0 ; arr[i] ; i++){
        n++;
    }
    return n;
}
