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
    for(i=min+1;i<max;i++)
    {
        if(i%5==2 || i%5==3)
        {
            printf("%d\n",i);
        }
    }

    return(0);
}
