#include<stdio.h>
//swap num without third vriable
int main()
{
    int x,y,z;
    printf("\n enter the value of x");
    scanf("%d",&x);
     printf("\n enter the value of y");
     scanf("%d",&y);
     printf("\n a:%d b:%d",x,y);
 x=x*y;
 y=x/y;
 x=x/y;


    printf("\n a:%d b:%d",x,y);

      return 0;

}

