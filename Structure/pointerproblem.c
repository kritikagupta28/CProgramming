#include<stdio.h>
typedef int* = pointerr ;
int main (){
    int x = 5 , y = 7 ;
    //int *a,b ;    // int* x and y 
    pointerr a = &x , b = &y ;
    printf("%p\n",a);
    printf("%p\n",b);
    return 0 ;
}