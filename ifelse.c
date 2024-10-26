#include<stdio.h>
int main()
{

    char name[20];
    int age;
    printf("\n Enter the Name:");
    scanf("%s",name);
    printf("\n Enter the age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("\n %s age is %d eligible for vote",name,age);
    }
    else{
         printf("\n %s age is %d not eligible for vote",name,age);
    }
    return 0;
}
