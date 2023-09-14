#include<stdio.h>
int main (){
    int r , c ;
    printf("enter number of rows : ");
    scanf("%d",&r);
    printf("enter number of columns : ");
    scanf("%d",&c);
    int arr[r][c] ;
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("enter[%d][%d] = ",i,j);
        scanf("%d",&arr[i][j]);
    }
   }
   int sum = 0 ;
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        sum += arr[i][j];
    }
   }
        printf("the sum of all elements of given matrix is = %d ",sum);
   return 0 ;
}