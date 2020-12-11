#include<stdio.h>
int main()
{
    int N,i,j,sum=0,max,min,temp;
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        scanf("%d %d",&max,&min);
            sum=0;

        if(min>max)
        {
            temp=max;
            max=min;
            min=temp;
        }

        for(j=min+1;j<max;j++)
        {

            if(j%2 == 1 || j%2 == -1)
            {
                sum=sum+j;
            }
        }
        printf("%d\n",sum);
    }
    return(0);
}
