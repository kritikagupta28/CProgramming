#include<stdio.h>
int main (){
    int r , c ;
    printf("enter number of rows : ");
    scanf("%d",&r);
    printf("enter number of columns : ");
    scanf("%d",&c);
    int arr[r][c] ;
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("enter[%d][%d] = ",i,j);
        scanf("%d",&arr[i][j]);
    }
   }
   int minr = 0;
   int maxr = r-1 ;
   int minc = 0 ;
   int maxc = c-1 ;
   int totalno = r*c ;
   int count = 0 ;
   while (count <= totalno){
   for(int i=minr;i<=maxc;i++){
   printf("%d ",arr[minr][i]);
   count ++ ;
   }
     minr++ ;
   for(int i=minr;i<=maxc;i++){
    printf("%d ",arr[i][maxc]);
    count ++ ;
   }
   maxc-- ;
   for(int i=maxc;i>=minc;i--){
    printf("%d ",arr[maxr][i]);
    count ++ ;
   }
   maxr--;
   for(int i=maxr;i>=minr;i--){
     printf("%d ",arr[i][minc]);
     count ++ ;
   }
   minc++;
printf("\n%d\n",count);
   }
   printf("%d\n",count);
   printf("%d",totalno);
   return 0 ;
}