#include<stdio.h>
int main(){
    int m ; 
    printf("enter number of rows : ");
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            if (i==1 || j==1 || i==n || j==n){
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0 ;
}