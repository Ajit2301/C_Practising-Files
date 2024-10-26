#include<stdio.h>
// 4 digit number  summing 1st and 4 num
int main()
{
    int a,b,c,d,e,f,g,h ;
    printf("\n enter 7 digit num:");
    scanf("%d",&a);//1234
    b=a/1000000;//123
    c=a%100;//4
    d=b/10;//12
    e=b%10;//3
    f=d/10;//1
    g=d%10;//2
    h=b+c;
    printf("\n sum :%d%d",b,c);


      return 0;

}
