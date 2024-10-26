#include<stdio.h>
int main()
{
    float l,b,r,area,perimeter,circumferencecircle;
    printf("\n enter the length of the rectangle",l);
    scanf("%f",&l);
     printf("\n enter the breadth of the rectangle",b);
     scanf("%f",&b);
     printf("\n enter the radius of the circle",r);
     scanf("%f",&r);
     area=l*b;
     perimeter=2*(l+b);
     circumferencecircle=2*3.14*r;
      printf("\n Area of the rectangle %f",area);
      printf("\n Perimeter of the rectangle %f",perimeter);
      printf("\n Circumference of the circle %f", circumferencecircle);
      return 0;

}
