#include<stdio.h>

int main()
{
    int totalpop,totallit,litmen,litwomen,totalunlit;
    totalpop=80000;
    totallit=0.48*totalpop;
    litmen=0.35*totalpop;
    litwomen=totallit-litmen;
    totalunlit=totalpop-totallit;

      printf("\n totalillterate:%d",totalunlit);


      return 0;

}
