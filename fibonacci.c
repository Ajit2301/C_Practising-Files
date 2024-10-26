#include <stdio.h>
int main()
{
    int a=-1,b=1,c,l,sum=0;
    printf("\n Enter the Limit");
    scanf("%d",&l);
    for(int i=0;i<l;i++){
    c=a+b;
    a=b;
    b=c;
    printf("%d",c);
    sum+=c;
    }
    printf("\n Total:%d",sum);
    return 0;

}
