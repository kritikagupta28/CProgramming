#include<stdio.h>
int main(){
    int m ; 
    printf("enter number of rows : ");
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            if(i==j || (i+j)%2==0)
            printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    return 0 ;
}