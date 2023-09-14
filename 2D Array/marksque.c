#include<stdio.h>
int main (){
    int r;
    printf("enter number of students : ");
    scanf("%d",&r);
    int c = 3 ;
    int arr[r][c];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("enter marks of phy,chem,maths of %d student = ",i+1);
        scanf("%d",&arr[i][j]);
    }
}
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d",arr[i][j]);
    }
    printf("\n");
}
return 0 ;
}