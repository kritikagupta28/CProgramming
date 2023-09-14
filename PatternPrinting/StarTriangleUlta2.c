#include<stdio.h>
int main(){
    int m ; 
    printf("enter number of rows : ");
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        int a = m ;
        for(int j=1;j<=a;j++){
            printf("* ");
        }
        a-- ;
        printf("\n");
    }
    return 0 ;
}