#include<stdio.h>
#include<string.h>
int main (){
    typedef struct book {
        char name[50] ;
        float price ;
        int pages ;
    }novel;

      novel a ;
     strcpy (a.name,"Secret Seven");
     a.price = 150.5 ;
     a.pages = 120 ;
     
     printf("%c\n",a.name);
     printf("%f\n",a.price);
     printf("%d\n",a.pages);

     novel b ;
     strcpy (b.name,"Famous Five");
     b.price = 160.5 ;
     b.pages = 130 ;
     
     printf("%c\n",b.name);
     printf("%f\n",b.price);
     printf("%d\n",b.pages);

     novel c ;
     strcpy (c.name,"Fourty Rules");
     c.price = 170.5 ;
     c.pages = 140 ;
     
     printf("%c\n",c.name);
     printf("%f\n",c.price);
     printf("%d\n",c.pages);
     return 0 ;
}
