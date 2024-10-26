#include<stdio.h>
int main()
{


    int month;
    printf("\n Enter the month:");
    scanf("%d",&month);
    switch(month)
    {
    case 1:
        printf("\n jan");
        break;
    case 2:
        printf("\n feb");
        break;
    case 3:
        printf("\n mar");
        break;
    default:
        printf("\n invalid");
        break;

    }


    return 0;
}



