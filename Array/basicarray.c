#include<stdio.h>
int main (){
    int arr[5] = {1,2,3,4,5} ;
    arr[2] = 300 ; // array is changed 
    printf("%d",arr[2] );
    return 0 ;
}