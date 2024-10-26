// return with function
#include<stdio.h>
int add();//function declaration
int main()
{
    int a;
    a=add();
    printf("\n Total:%d",a);
    return 0;


}
int add()//formal parameters
{
    int a,b,c;
    printf("\n Enter the number 1:");
    scanf("%d",&a);
    printf("\n Enter the number 2:");
    scanf("%d",&b);
    return a+b;



}
