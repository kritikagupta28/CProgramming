#include<stdio.h>
typedef float realnumber ;
//  old data type   new data type
typedef int Integer ;
int main (){
    Integer x = 5;
    realnumber y = 5.5 ;
    printf("%d\n",x);
    printf("%f",y);
    return 0 ;
}