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
   int m , n ;
    printf("enter number of rows : ");
    scanf("%d",&m);
    printf("enter number of columns : ");
    scanf("%d",&n);
    int brr[m][n] ;
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("enter[%d][%d] = ",i,j);
        scanf("%d",&brr[m][n]);
    }
   }
   //multiply
   int res[r][n];
   int cr = m ;
   for(int i=0;i<r;i++){
    for(int j=0;j<n;j++){
        res[i][j] = 0 ;
        for(int k=0;k<cr;k++){
            res[i][j] += arr[i][k]*brr[k][j];
        }
    }
   }
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",res[i] [j]);
    }
    printf("\n");
   }
   return 0 ;
}