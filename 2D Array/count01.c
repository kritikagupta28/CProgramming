#include<stdio.h>
int main(){
    int maxidx = -1 ;
    int maxcount = 0 ;
    int arr[2][2] = {{1,0},{1,1}};
    for(int i=0;i<2;i++){
       int count = 0 ;
        for(int j=0;j<2;j++){
if (arr[i][j] == 1){
    count++ ;
}
if(count>maxcount){
    maxcount=count ;
    maxidx = i ;
}
        }
    }
    printf("%d  ,  %d",maxcount,maxidx);
    return 0 ;
}