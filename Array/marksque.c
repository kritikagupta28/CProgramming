#include<stdio.h>
int main (){
    int arr[10] = {20,30,40,50,60,70,80,90,100,110};
    for(int i=1;i<=10;i++){
        if(arr[i-1]<=50){
            printf("%d , %d\n",i-1,arr[i-1]);
        }
    }
    return 0 ;
}