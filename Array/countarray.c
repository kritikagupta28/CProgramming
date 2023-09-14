#include<stdio.h>
int main(){
    int x ;
    printf("enter x : ");
    scanf("%d",&x);
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int count = 0 ;
    for(int i=0;i<10;i++){
         if (arr[i]>x){
            count ++ ;
         }
    }
    printf("there are %d elements in the given array which is greater than x",count);
    return 0 ;
}