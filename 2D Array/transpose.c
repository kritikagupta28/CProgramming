#include<stdio.h>
int main (){
    int arr[2][2] = {{1,2},{1,1}};
      for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            int brr[j][i] = arr[i][j];
        }
      }
      int brr[2][2];
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                brr[i][j] = arr[j][i] ;
            }
        }
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                printf("%d",brr[i][j]) ;
            }
            printf("\n");
        }
      return 0 ;
}