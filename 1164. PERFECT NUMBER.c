#include<stdio.h>
int main()
{
    int i,num,j,sum=0,T;
    scanf("%d",&T);

    for(i=1;i<=T;i++)
    {
        sum=0;
        scanf("%d",&num);

        for(j=1;j<num;j++)
        {
            if(num%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==num)
        {
            printf("%d eh perfeito\n",num);
        }
        else
        {
            printf("%d nao eh perfeito\n",num);
        }
    }
    return(0);
}
