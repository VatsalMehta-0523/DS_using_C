#include <stdio.h>

int main(){
    int n , cnt = 0;
    printf("enter a value : ");
    scanf("%d",&n);
    
    printf("factors of %d are :  ", n );
    for (int i = 1 ; i <= n ; i++){
        if ( n % i == 0 ){
            printf("%d ",i);
            cnt++;
        }
    }
    
    if (cnt == 2){
        printf("\n%d is a prime number ",n);
    }
    else{
        printf("\n%d is not a prime number ",n);
    }
    return 0 ;
}
