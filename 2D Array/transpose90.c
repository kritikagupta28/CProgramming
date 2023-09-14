#include<stdio.h>
int main (){
    // taking input : 
    int n ;
    printf("enter number of rows/columns : ");
    scanf("%d",&n);
    int arr[n][n] ;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("enter[%d][%d] = ",i,j);
        scanf("%d",&arr[i][j]);
    }
   }
   // transpose : 
   int brr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                brr[i][j] = arr[j][i] ;
            }
        }
        // rotate : 
        for(int i=0;i<n;i++){
            int j=0;
            int k = n-1 ;
            while(j<k){
                int temp = arr[i][j];
                arr[i][j] = arr[i][k];
                arr[i][k] = temp ;
            }
        }
   // printing output : 
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("%d ",arr[i] [j]);
    }
    printf("\n");
   }
   return 0 ;
}
