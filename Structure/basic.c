#include<stdio.h>
int main (){
    struct pokemon { // user defined data type 
        int hp ;
        int speed ;
        int attack ;
        char tier ; // S,A,B,C,D
    } pikachu , charizard ;
    printf("enter hp of pikachu : ");
    scanf("%d",pikachu.hp) ;
    //pikachu.hp = 50;
    pikachu.speed = 100 ;
    pikachu.attack = 60 ;
    pikachu.tier = 'A' ;
    printf("the hp of pikachu is %d",pikachu.hp);

    charizard.hp = 80 ;
    charizard.speed = 80 ;
    charizard.attack = 130 ;
    charizard.tier = 'S' ;

printf("the hp of pikachu is %d",pikachu.hp);

    return 0 ;
}