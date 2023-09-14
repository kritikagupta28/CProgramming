#include<stdio.h>
#include<string.h>
int main (){
    typedef struct pokemon {
        int hp ;
        int speed ;
        int attack ;
        int tier ;
        char name[20];
    } pokemon ;
    pokemon arr[3] ;
    strcpy(arr[0].name ,"Charizard");
    arr[0].attack = 50 ;
    arr[0].hp = 100 ;
    arr[0].speed = 30 ;
    arr[0].tier = 'A' ;

    strcpy(arr[0].name ,"Mewtwo");
    arr[1].attack = 150 ;
    arr[1].hp = 150 ;
    arr[1].speed = 130 ;
    arr[1].tier = 'S' ;

    strcpy(arr[0].name ,"Pikachu");
    arr[2].attack = 60 ;
    arr[2].hp = 200 ;
    arr[2].speed = 50 ;
    arr[2].tier = 'B' ;

    for(int i=0;i<3;i++){
        printf("%s\n",arr[i].name);
        printf("%d\n",arr[i].attack);
        printf("%d\n",arr[i].hp);
        printf("%d\n",arr[i].speed);
        printf("%d\n",arr[i].tier);
    }
    return 0 ;
}