#include<stdio.h>
#include<stdlib.h>
int main()
{
    // void*calloc(size_t n,size_t size)
    int i,n;
    printf("\n enter the limit:");
    scanf("%d",&n);
    int *ptr=(int *)calloc(n,sizeof(int));
    if(ptr==NULL)
    {
        printf("\n memory not availabel");
        exit(1);

    }
    for(i=0;i<n;i++){
            printf("\n Enter the number:");
        scanf("%d",ptr+i);

    }

     for(i=0;i<n;i++){
        printf("\n%d:%d",(&ptr+i),*(ptr+i));
    }
    return 0;

}

