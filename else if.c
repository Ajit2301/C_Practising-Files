#include<stdio.h>
int main()
{

    char name[20];
    int age;
    printf("\n Enter the Name:");
    scanf("%s",name);
    printf("\n Enter the age:");
    scanf("%d",&age);
    if(age>=18 && age<=20)
    {
        printf("\n %s age is %d eligible for vote he is youth",name,age);
    }
    else if(age<=18){
         printf("\n %s age is %d not eligible for vote he is child",name,age);
    }
     else if(age>=30 && age<=44){
         printf("\n %s age is %d  eligible for vote he is adult",name,age);
    }
     else if(age>=45){
         printf("\n %s age is %d  eligible for vote he is oldman",name,age);
    }
    return 0;
}

