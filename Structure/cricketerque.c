#include<stdio.h>
#include<string.h>
int main() {
    typedef struct cricketer {
        char name[20] ;
        int age ;
        int testmatch ;
        int runs ;
    } cricketer ;
      cricketer arr[5];
    for(int i=0;i<5;i++){
        printf("enter name of cricketer %d : ",i+1);
        scanf("%s",&arr[i].name);
        printf("enter age of cricketer %d : ",i+1);
        scanf("%d",&arr[i].age);
        printf("enter testmatch of cricketer %d : ",i+1);
        scanf("%d",&arr[i].testmatch);
        printf("enter runs of cricketer %d : ",i+1);
        scanf("%d",&arr[i].runs);
    }
    for(int i=0;i<5;i++){
        printf("name of cricketer %d is : %s",i+1,arr[i].name);
                printf("age of cricketer %d is : %d",i+1,arr[i].age);
                printf("testmatch of cricketer %d is : %d",i+1,arr[i].testmatch);
                printf("runs of cricketer %d is : %d",i+1,arr[i].runs);
    }
    return 0 ;
}
