#include<stdio.h>
int main()
{


    int year;
    printf("\n Enter the year:");
    scanf("%d",&year);

    if(year%100==0)
    {

         if(year%400==0)
    {
        printf("\n %d year is leap year",year);
    }

    }
    else if(year%4==0)
    {
        printf("\n %d year is leap year",year);

    }
    else{
         printf("\n %d year is  not  leap year",year);
    }

    return 0;
}


