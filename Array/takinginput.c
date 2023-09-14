#include<stdio.h>
int main (){
    int n ;
    printf("enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter %d element : ",i);
        scanf("%d",&arr[i]);
        
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d element is : %d \n",i , arr[i]);
    }
    return 0 ;
}