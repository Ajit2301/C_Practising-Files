//no return without arguments function
#include<stdio.h>
void add();//function declaration
int main()
{
    add();//function calling
    return 0;

}
void add()//function definition
{
    int a,b,c;
    printf("\n Enter the number 1:");
    scanf("%d",&a);
     printf("\n Enter the number 2:");
    scanf("%d",&b);
    c=a+b;
     printf("\n Total:%d",c);


}
