#include<stdio.h>
int main(){
    int n ;
    printf("enter number of columns : ");
    scanf("%d",&n);
    int nsp = n-1 ;
    int nst = 1 ;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int j=1;j<=nst;j++){
            printf("%d ",j);
        }
            nst += 2 ;
        printf("\n");
    }
    return 0 ;
}