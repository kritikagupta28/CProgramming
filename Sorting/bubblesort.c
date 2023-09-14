#include<stdio.h>
int main (){
    int arr[5] = {5,4,3,2,1};
    int n = 5 ;
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    // BUBBLE SORT :
    for(int i=0;i<n;i++){
        bool flag = true ; // ARRAY IS NOT SORTED YET 
       for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp ;
            flag = false ;
        }
       }
       if(flag==true) break ;
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
        return 0 ;
}