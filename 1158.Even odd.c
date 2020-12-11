#include<stdio.h>
int main()
{
    int i,num,T,Y,sum=0,j;
    scanf("%d",&T);


    for(i=1;i<=T;i++)
    {
        scanf("%d",&num);

        if(num%2==0)
        {
            num=num+1;
        }
        scanf("%d",&Y);
        for(j=1;j<=Y;j++)
        {
            sum=sum+num;
            num=num+2;

        }
        printf("%d\n",sum);
        sum=0;
    }
    return(0);
}
