#include<stdio.h>
//reverse number
int main()
{
    int a,b,c,d,e,f,g,h,i,reverse;
    printf("\n enter 5 digit num:");
    scanf("%d",&a);//12345
    b=a/10;//1234
    c=a%10;//5

    d=b/10;//123
    e=b%10;//4

    f=d/10;//12
    g=d%10;//3

    h=f/10;//1

    i=f%10;//2
     reverse=(c*10000)+(e*1000)+(g*100)+(i*10)+(h*1);
      printf("\n reverse:%d",reverse);


      return 0;

}
