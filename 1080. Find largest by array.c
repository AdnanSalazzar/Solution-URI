#include<stdio.h>
int main()
{
    int arr[100],i,large;
    for(i=0;i<100;i++)
    {
        scanf("%d",&arr[i]);
    }

    large=arr[0];

    for(i=1;i<=99;i++)
    {
        if((arr[i]>large))
        {
            large=arr[i];
        }
    }
    printf("%d\n",large);

    for(i=0;i<100;i++)
    {
        if(large==arr[i])
        {
            printf("%d\n",i+1);
        }
    }
    return(0);
}
