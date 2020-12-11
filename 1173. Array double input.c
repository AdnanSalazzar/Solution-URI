#include<stdio.h>
int main()
{
    int N[10],i,num;
    scanf("%d",&num);
if(num<50)
{

    for(i=0;i<10;i++)
    {
        N[i]=num;
        num=num*2;
    }
    for(i=0;i<10;i++)
    {
        printf("N[%d] = %d\n",i,N[i]);
    }
}
    return(0);
}
