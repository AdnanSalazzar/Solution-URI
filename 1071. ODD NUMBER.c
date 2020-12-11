#include<stdio.h>
int main()
{
    int i ,max , min,sum=0,temp;

    scanf("%d %d",&max,&min);

     if(min>max)
     {
         temp=max;
         max=min;
         temp=min;
     }

    for(i=min+1;i<max;i++)
    {
        if(i%2==1 || i%2==-1)
        {
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
    return(0);
}
