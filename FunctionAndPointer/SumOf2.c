#include<stdio.h>
int add(int x , int y){
    //int ans = x+y ;
    return x+y ;
}
int main(){
    int a ;
    int b ;
    printf("enter first number : ");
    scanf("%d",&a);
    printf("enter second number : ");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("the sum is %d",sum);
    return 0 ;
}