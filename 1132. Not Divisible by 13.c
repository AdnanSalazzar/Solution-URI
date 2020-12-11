#include<stdio.h>
int main()
{
    int max,min,i,temp,sum=0;
    scanf("%d%d",&min,&max);
    if(min>max)
    {
        temp=max;
        max=min;
        min=temp;
    }
    for(i=min;i<=max;i++)
    {
        if(i%13!=0)
        {
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
    return(0);
}
