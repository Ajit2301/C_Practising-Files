#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
   int n=sizeof(a)/sizeof(a[0]);
   int e=0;
   int o=0;

    for(int i=0;i<n;i++){

        if(a[i]%2==0){
            printf("\n even numbers :%d",a[i]);
            e++;
        }
            else
            {


                printf("\n odd  numbers :%d",a[i]);
                o++;
            }

        }
         printf("\n  total even numbers :%d",e);
         printf("\n  total odd numbers :%d",o);



    return 0;

}
