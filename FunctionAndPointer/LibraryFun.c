#include<stdio.h>
#include<math.h>
int main(){
    int n ;
    int a ;
    int b ;
    printf("enter n : ");
    scanf("%d",&n);
    int root = sqrt(n);
    printf("the square root is : %d\n",root);
    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);
    int power = pow(a,b);  // a^b
    printf("a^b = %d",power);
return 0 ;
}