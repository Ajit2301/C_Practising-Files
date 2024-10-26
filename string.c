#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],c[10] ;
    char b[10]={'k','u','m','a','r','\0'};
    printf("\n enter the name:");
    gets(a);
    printf("\n %s",a);
    printf("\n compare :%d",strcmp(a,b));
    printf("\n reverse :%s",strrev(a));
    printf("\n length :%d",strlen(a));
    printf("\n upper :%s",strupr(a));
    printf("\n lower :%s",strlwr(a));
    printf("\n copy :%s",strcpy(c,a));

    return 0;
}
