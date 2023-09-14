#include<stdio.h>
int main (){
    int arr[6] = {1,2,3,4,5,6};
    int oddsum = 0 ;
    int evensum = 0 ;
    for(int i=0;i<6;i++){
      if(i%2!=0){
       // 2+4+6 = 12
        oddsum += arr[i] ;
      }
      else {
        //1+3+5 = 9
        evensum += arr[i] ;
      }
    }
    int res = oddsum - evensum;
    printf("the difference of sum of odd index and sum of even index is %d",res);
    return 0 ;
}