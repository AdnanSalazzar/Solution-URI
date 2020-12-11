#include<stdio.h>
int main()
{
    int start, end, i,sum=0;
    scanf("%d",&start);
    scanf("%d",&end);
    if(start % 2==0)
    {
        start =start+1;
    }

    for(i=start;i<end;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
}
