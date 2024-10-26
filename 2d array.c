#include <stdio.h>
int main()
{
     int i,j,a[100][100],b[100][100],c[100][100],r,c1;
    printf("\n enter the number of rows:");
    scanf("%d",&r);
     printf("\n enter the number of columns:");
    scanf("%d",&c1);
    for(i=0;i<r;i++)
    {
         for(j=0;j<c1;j++){
        printf("\n enter the value :");
        scanf("%d",&a[i][j]);
         }
         }
    for(i=0;i<r;i++)
    {
         for(j=0;j<c1;j++){
        printf("\n enter the value b[%d][%d]:",i,j);
        scanf("%d",&b[i][j]);
         }
    }
    for(i=0;i<r;i++)
    {
         for(j=0;j<c1;j++){
        c[i][j]=a[i][j]+b[i][j];
        printf("\t%d",c[i][j]);
         }
          printf ("\n");
    }


    return 0;


}

