
#include <stdio.h>
int m , n ;
int main(){
  int a[10][10] , b[10][10] ;
  
  printf(" enter no. of rows (m) and columns (n) for matrix : ");
  scanf("%d %d",&m ,&n );
  printf("enter elements of matrix : \n");
  for (int i= 0 ; i < m ; i++ ){
    for ( int j = 0 ; j < n ; j++ ){
      scanf("%d", &a[i][j]);
    }
  }
  printf("entered matrix is : \n");
  for (int i = 0 ; i < m ; i++ ){
    for ( int j = 0 ; j < n ; j++ ){
      printf ("%d\t", a[i][j] );
    }
    printf("\n");
  }
  printf("transpose of given matrix is : \n");
  for (int i = 0 ; i < n ; i++ ){
    for ( int j = 0 ; j<m ; j++){
      b[i][j] = a[j][i];
      printf("%d\t",b[i][j]);
    }
    printf("\n");
  }
  
  return 0 ;
}