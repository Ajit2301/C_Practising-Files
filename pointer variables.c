#include<stdio.h>
int main()
{
    int a[]={5,10,15,20,25};
    int *p;
    p=&a;
    printf("\n size of int:%d",sizeof(int));//4
    printf("\n size of a:%d",sizeof(a));//20
    printf("\n length of a:%d",sizeof(a)/sizeof(int));
    printf("\n address of a:%d",&a);
    printf("\n value of p:%d",*p);

 printf("\n value of p++:%d",*p++);
 printf("\n value of p:%d",*p);
 printf("\n value of *p++:%d",*p++);
 printf("\n value of p:%d",p);
 printf("\n value of p++:%d",p++);
 printf("\n value of *p:%d",*p);

 printf("\n value of ++p:%d",++p);
 printf("\n value of ++*p:%d",++*p);
    return 0;


}
