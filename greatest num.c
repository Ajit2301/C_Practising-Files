#include<stdio.h>
int main()
{
    int i,n,t,s,a[100];
    printf("\n Enter the limit");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\n Enter the Number");
        scanf("%d",&a[i]);
    }
    t=a[0];
    s=a[0];
    for(i=1;i<n;i++){

        if(t<a[i]){
             s=t;
            t=a[i];
        }
        else if(s<a[i])

            s=a[i];
    }

     printf("\n The  Greatest Number is:%d,%d",t,s);
     return 0;
}
