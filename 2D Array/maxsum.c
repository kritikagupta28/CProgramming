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
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",arr[i] [j]);
    }
    printf("\n");
   }
   printf("\n");
   int max = 0 ;
   int sum = 0 ;
   int brr[5] ;
   for(int i=0;i<r;i++){
    sum = sum + brr[i] ;
        //sum = sum + arr[i][j] ;
     if(sum > max ){
         max = sum ;
     } 
   }
   printf("%d",max);
   return 0 ;
} 