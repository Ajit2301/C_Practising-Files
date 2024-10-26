#include<stdio.h>

int main()
{
    int number;

    printf("\nEnter the number: ");
    scanf("%d", &number);



    if(number%2==0 )
    {
        printf("\n Number is even");
    }
    else
    {
        printf("\n Number is odd");
    }

    return 0;
}

