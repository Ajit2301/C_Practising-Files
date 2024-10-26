#include<stdio.h>
int main()
{

    FILE *fp;

    fp=fopen("sample.txt","a");
    fprintf(fp,"hello welcome Ajith");
    fclose(fp);
    return 0;
}
