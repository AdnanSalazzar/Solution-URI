#include<stdio.h>
int main()
{
    int num,yrs, mon;
    scanf("%d",&num);

    yrs=num/ 365;
    num=num-(yrs * 365);

    mon=num/30;
    num=num - (mon * 30);

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",yrs,mon,num);

}
