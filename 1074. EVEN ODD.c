#include<stdio.h>
int main()
{
    int i, N,num;
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        scanf("%d",&num);
        if(num>0)
        {
            if(num%2==0)
            {
                printf("EVEN POSITIVE\n");
            }
            else
            {
                printf("ODD POSITIVE\n");
            }
        }
        else if(num<0)
        {
            if(num%2==0)
            {
                printf("EVEN NEGATIVE\n");
            }
            else
            {
                printf("ODD NEGATIVE\n");
            }
        }
        else if (num==0)
        {
            printf("NULL\n");
        }
    }
    return(0);
}
