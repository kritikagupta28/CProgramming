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
   int l1 ;
   int l2 ;
   int r1 ;
   int r2 ;
   printf("enter l1 : ");
   scanf("%d",&l1);
   printf("enter l2 : ");
   scanf("%d",&l2);
   printf("enter r1 : ");
   scanf("%d",&r1);
   printf("enter r2 : ");
   scanf("%d",&r2);
   int sum = 0 ;
   for(int i=l1;i<l2;i++){
    for(int j=r1;j<r2;j++){
        sum += arr[i][j];
    }
   }
        printf("the sum of all elements of given matrix is = %d ",sum);
   return 0 ;
}