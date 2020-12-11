#include<stdio.h>
int main()
{
    int i ,limit;
    scanf("%d",&limit);

    for(i=1;i<=limit;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }
    return(0);
}
