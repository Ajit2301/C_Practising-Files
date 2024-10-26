#include<stdio.h>
int main()
{
    int i=0,n;
    printf ("\n enter the number:");
    scanf("%d",&n);
    do{
        printf("\n%d",i);
        i+=2;
    }
    while(i<=n);
    return 0;
}

