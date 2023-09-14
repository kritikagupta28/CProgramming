#include<stdio.h>
int main (){
    int a = 5;
    int *x = &a ;
      *x = 7 ; // a is changed
    printf("%p\n",&a);
     printf("%p\n",x);
     printf("%p\n",&x); // stores address of x and x stores adress of a
     printf("%d\n",*x); // x ke andar jis value ka adress store hai wo value
    return 0 ;
}