#include<stdio.h>
int main(){
    int m ; 
    printf("enter number of rows : ");
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        int a = 1 ;
        for(int j=1;j<=m;j++){
            int d = a + 64 ;
            char ch = (char)d ;
            printf("%c "ch);
            a++ ;
        }
        printf("\n");
    }
    return 0 ;
}s