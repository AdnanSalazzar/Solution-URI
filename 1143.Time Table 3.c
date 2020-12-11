#include<stdio.h>
int main()
{
    int j=0,i,sum=1,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        do
        {
            sum=sum*i;
            printf("%d ",sum);
            j++;
        }while(j<3);
        j=0;
        printf("\n");
        sum=1;
    }
    printf("\n");
    return(0);
}
