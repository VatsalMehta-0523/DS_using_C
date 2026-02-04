#include <stdio.h>

int main(){
    int n ;               // n is size of array
    printf("enter size of array : ");
    scanf("%d",&n);

    int arr[n];           // array intialising of size n
    for (int i = 0 ; i < n ; i++ ){
        printf("enter value for position%d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int max = arr[0];           // min & max are variables which will store
    int min = arr[0];           // minimum and maximum value respectively after executing for loop
    for(int i = 0 ; i < n ; i++ ){
        if(arr[i]>max){
            max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }
    }

    printf("\nThe minimum number present in the given array is : %d\n",min);
    printf("The maximum number present in the given array is   : %d\n",max);

    return 0 ;
}
