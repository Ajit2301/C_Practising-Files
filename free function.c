#include<stdio.h>
#include<stdlib.h>
int * gettingvalues()
{
    int i;
    int *ptr=(int *)malloc(3*sizeof(int));
    for(i=0;i<3;i++){
    printf("\n Enter the number:");
    scanf("%d", ptr+i);
    }
    return ptr;


}
int main()
{

    int i,n=0;
    int *ptr=gettingvalues();
    for(i=0;i<3;i++)
    {
        n+=*(ptr+i);
    }
    printf("\n Total %d:",n);
    return 0;
    free(ptr);
    ptr=NULL;


}

