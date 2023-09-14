#include<stdio.h>
#include<string.h>
int main (){
    char str[] = "kritika" ;
    char* ptr = &str[0];
    printf("%p\n",&str[0]);
    printf("%p\n",ptr);
    printf("%p",str);
    return 0 ;
}