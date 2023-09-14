#include<stdio.h>
void fun (int brr[]){
    brr[4] = 50 ;
    return ;
}
int main (){
    int arr [5] = {1,2,3,4,5};
    printf("%d\n",arr[4]);
    fun(arr);
    printf("%d",arr[4]);
    return 0 ;
}
// array pass by referrence