#include<stdio.h>
int main (){
    int n,flag = 1;
    printf("enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        int a = i+1 ;
        printf("enter %d element : ",a);
        scanf("%d",&arr[i]);
    }
    for(int i=0,j=n-1;i<j;i++,j--){
        if(arr[i]!=arr[j])
           flag = 0 ;
    }
    if(flag==1) {
     printf("it is a palindrome");
       break ;
    else printf("not palindrome");
    }
    return 0 ;
}