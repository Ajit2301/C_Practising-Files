#include<stdio.h>
#include<stdlib.h>
int main()
{
    // void* malloc size_t size)
    int i,n;
    printf("\n enter the limit:");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("\n memory not availabel");

    }
    for(i=0;i<n;i++){
            printf("\n Enter the number:");
        scanf("%d",ptr+i);

    }
     for(i=0;i<n;i++){
        printf("%d ",(*ptr+i));
    }
    return 0;

}
