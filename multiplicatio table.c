#include<stdio.h>
int main()
{

    int i,t,l;
    printf("\n Enter the Table Number:");
    scanf("%d",&t);
     printf("\n Enter the Limit Number:");
    scanf("%d",&l);
    for(i=0;i<=l;i++){
    printf("\n %d X %d = %d",i,t,i*t);
    }
    return 0;
}
