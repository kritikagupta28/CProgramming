#include<stdio.h>
int main(){
    int m ; 
    int n ;
    printf("enter number of rows : ");
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m+1-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0 ;
}