#include <stdio.h>

int fact(int n);                                     // functiom declaration.             

int main(){
    int n;
    printf("enter number (for factorial) :");
    scanf("%d",&n);

    printf("factorial for %d is %d",n,fact(n));      // function revoking / calling .

    return 0;
}

int fact(int n){                                      // function defination .
    if (n==0){
        return -1 ;                                   // -1 indicates that scanned n is a negative number .
    }
    else if ( n == 1 ){
        return n ;
    }
    else{
        return n*fact(n-1) ;
    }
}
