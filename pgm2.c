#include <stdio.h>

int main()
{ int m1,m2,m3,m4,m5;
float average,Total;
printf("\n enter Tamil marks ",m1);
scanf("%d",&m1);
printf("\n enter english marks ",m2);
scanf("%d",&m2);
printf("\n enter maths marks ",m3);
scanf("%d",&m3);
printf("\n enter science marks ",m4);
scanf("%d",&m4);
printf("\n enter social marks ",m5);
scanf("%d",&m5);
Total=m1+m2+m3+m4+m5;
average=Total/5;
printf("\n Total marks %f",Total);
printf("\n Average marks %f",average);
    return 0;
}

