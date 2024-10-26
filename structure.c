#include<stdio.h>
struct Ajith
{
    char *name;
    int age;
    float percentage;
};
void dis(struct Ajith a){
printf("\n Name:%s",a.name);
    printf("\n Age:%d",a.age);
    printf("\n Percentage:% f",a.percentage);
    }
int main()
{
    struct Ajith a;

    printf("\n Enter the name:");
    scanf("%s",a.name);
     printf("\n Enter the Age:");
    scanf("%d",&a.age);
     printf("\n Enter the Percentage:");
    scanf("%f",&a.percentage);

   dis(a);

    return 0;
}
