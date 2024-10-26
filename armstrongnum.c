#include<stdio.h>
int main()
{
    int n,a,b,c,d,e;
    printf("\n enter the number:");
    scanf("%d",&n);//123
    a=n/100;//1
    b=n%100;//23
    c=b/10;//2
    d=b%10;//3

    printf("\n%d %d %d:",a,c,d);
    e=(a*a*a)+(c*c*c)+(d*d*d);
    if(e==n){
        printf("\n %d it is a armstrong number",n);
    }
    else
        printf("\n %d it is a  not armstrong number",n);

    return 0;
    }




