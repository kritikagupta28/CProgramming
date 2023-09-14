#include<stdio.h>
int main(){
    int x ;
    printf("enter x : ");
    scanf("%d",x);
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int totalpairs = 0 ;
    for (int i=0;i<10;i++){
        for(int j=i;j<10;j++){
            if (arr[i]+arr[j] == x){
                totalpairs ++ ;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("total pairs = %d",totalpairs);
    return 0 ;
}