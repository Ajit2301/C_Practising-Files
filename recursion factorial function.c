#include<stdio.h>
int factorial(int i)
{
    if(i<=1)
        return 1 ;
    else
            return i*factorial(i-1);


}
int main()
{
    int i,f;
    printf("\n enter the number:");
    scanf("%d",&i);
    f=factorial(i);
    printf("\n factorial of %d is:%d",i,f);
    return 0;


}
