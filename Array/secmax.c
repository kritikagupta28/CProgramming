#include<stdio.h>
int main (){
    int arr[5] = {5,4,3,2,1};
    int max = arr[0];
    for(int i=0;i<5;i++){
       if (arr[i]>max){
        max = arr[i];
       }
    int secmax = arr[0];
        if ((arr[i]>secmax)&&(max!=arr[i])){
            secmax == arr[i];
    }
       }
         printf("the second max element of this array is %d ",secmax);
    
    return 0 ;
}