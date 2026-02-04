#include <stdio.h>
void storetable(int arr[][10]);
void printtable(int arr[][10]);
int n;
int main(){

  printf("how many tables do you want to store : ");
  scanf("%d", &n);
  int arr[n][10] ;
  storetable(arr);            // will store n number of tables in an 2-D array
  printtable(arr);            // will simply print values at respective index of 2-d array ( print table stored )
  return 0;
}


void storetable( int arr[][10]){

  for (int i = 0 ; i < n ; i++ ){
    for (int j=0; j<=10; j++){
      arr[i][j] = (i+1)*(j+1) ;
      }
  }
}

void printtable(int arr[][10]){
  for ( int i = 0; i < n ; i++){
    for ( int j = 0; j<10;j++){
      printf("%d  ", arr[i][j]);
    }
    printf("\n");
  }
}
