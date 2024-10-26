#include<stdio.h>
//sum of five digit number
int main()
{
    int a,b,c,d,e,f,g,h,i,sum=0;
    printf("\n enter 5 digit num:");
    scanf("%d",&a);//12345
    b=a/10;//1234
    c=a%10;//5
    sum+=c;
    d=b/10;//123
    e=b%10;//4
     sum+=e;
    f=d/10;//12
    g=d%10;//3
     sum+=g;
    h=f/10;//1
    sum+=h;
    i=f%10;//2
     sum+=i;
      printf("\n sum:%d",sum);


      return 0;

}
//simple method

#include <stdio.h>

// Sum of digits of a number
int main()
{
    int num, sum = 0;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);  // Example input: 12345

    // Ensure the number is positive
    if (num < 0) {
        num = -num;
    }

    // Loop to sum the digits
    while (num > 0) {
        sum += num % 10;  // Add the last digit to sum
        num /= 10;        // Remove the last digit
    }

    printf("Sum of the digits: %d\n", sum);

    return 0;
}
