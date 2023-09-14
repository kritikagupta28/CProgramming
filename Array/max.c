#include<stdio.h>
#include<limits.h>
int main(){
    int arr[6] = {5,6,4,3,2,1};
    int max = INT_MIN ;
    for(int i=0;i<6;i++){
        if (max < arr[i])
        max = arr[i];
    } 
    printf("the max element of this array is %d",max);
    return 0 ;
}