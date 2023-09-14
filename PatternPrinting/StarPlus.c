#include<stdio.h>
int main(){
    int m ; 
    printf("enter number of rows : ");
    scanf("%d",&m);
    int ml = (m/2) + 1 ;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            if (i==ml || j==ml){
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