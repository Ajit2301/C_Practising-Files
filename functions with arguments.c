//no return with arguments function
#include<stdio.h>
void add(int,int);//function declaration
int main()
{
    int a,b,c;
    printf("\n Enter the number 1:");
    scanf("%d",&a);
    printf("\n Enter the number 2:");
    scanf("%d",&b);
    add(a,b);//actual pa rameters
    return 0;

}
void add(int a,int b)//formal parameters
{
    int c;
    c=a+b;
    printf("\n Total:%d",c);


}
