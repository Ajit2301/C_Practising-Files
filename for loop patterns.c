
#include<stdio.h>
int main()
{
    int i,j,n;
    printf ("\n enter the number:");
    scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++){

        printf("*");

        }
        printf("\n");

    }

    return 0;
}
