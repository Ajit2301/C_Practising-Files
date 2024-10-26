#include<stdio.h>
int main()
{
 char str[100];
 int al=0,n=0,c=0;
 printf("\n Enter The String");
 gets(str);
 for(int i=0;str[i]!=0;i++)
 {
     if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122)){
        printf("%c",str[i]);
        al++;
     }

    else if(str[i]>=48&&str[i]<=57){
        printf("\n Numbers:%c",str[i]);
        n++;
    }
    else{
        printf("\n Special Characters:%c",str[i]);
        c++;
    }


 }
  printf("\n  Alphabets:%d",al);
 printf("\n Numbers:%d",n);
  printf("\n Special Characters:%d",c);


 return 0;

 }
