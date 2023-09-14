#include<stdio.h>
int factorial (int c){
    int fact = 1
    for(int i=1;i<=c;i++){
       fact = fact*i ;
    }
    return fact ;
}
    int n ;
    int r ;
int comb (int n ,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main (){
    int n ;
    int r ;
    printf("enter n : ");
    scanf("%d",&n);
    printf("enter r : ");
    scanf("%d",&r)
    int ncr = comb();
    printf("the combination of n and r is %d ",ncr);
    return 0 ;
}