#include<stdio.h>
int main (){
    int arr[5] = {5,4,3,2,1};
    int n = 5 ;
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    for(int j =0;j<n;j++){
    int min = arr[0];
    int idx = 0 ;
    for(int i=0;i<n;i++){
    if(arr[i]<min){
        min = arr[i];
        idx = i ;
      }
        }
        int a = 0;
         printf("%d",min);
         int temp = arr[j];
         arr[j] = arr[0];
         arr[0] = temp ;
         a ++ ;
    }
    printf("\n");
    for(int i =0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0 ;
}