#include<stdio.h>
int main()
{

    FILE *fp;
    char c;
    fp=fopen("sample.txt","r");
    if (fp==NULL)
        printf("\n The File is not Available");
    while(1)
    {

        c=fgetc(fp);
        if(c==EOF)
            break;
            printf("%c",c);
    }
    return 0;
}
