
// return with arguments function
#include<stdio.h>
int add(int,int);//function declaration
int main()
{
    int a,b,c;
    printf("\n Enter the number 1:");
    scanf("%d",&a);
    printf("\n Enter the number 2:");
    scanf("%d",&b);
    c=add(a,b);//actual parameters
    printf("\n Total:%d",c);

    return 0;

}
int add(int a,int b)//formal parameters
{

    return a+b;



}
