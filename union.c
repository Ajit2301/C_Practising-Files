#include<stdio.h>
struct store
{
    double price;
    union{
        struct{
            char *book;
            char *author;

        }book;
        struct{
            char  *model;
            char *color;


        }mobile;
    }product;

}o;

int main()

{
   //puts(" \nmobile model:%s", o.product.mobile.model="Samsung");
    //puts("\n mobile color: %s",o.product.mobile.color="Blue");
    puts("\n mobile price: %f",o.price=18000.00);
    return 0;

}
