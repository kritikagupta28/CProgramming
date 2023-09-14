#include<stdio.h>
int main(){
    char str[20] = "college wallah";
    str[1] = 98 ;
    int i = 0;
    while(str[i]!='\0'){
        printf("%c\n",str[i]);
        printf("%c\n",i[str]);
        printf("%c\n",*(i+str));
        printf("%c\n",*(str+i));
        i++;
    }
    return 0 ;
}