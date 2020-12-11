#include<stdio.h>
int main()
{
    int num,hrs,min;
    scanf("%d",&num);

    hrs= num/3600;
    num=num-(hrs*3600);

    min=num/60;
    num=num-(min* 60);

    printf("%d:%d:%d\n",hrs,min,num);

    return(0);
}
