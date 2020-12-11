#include<stdio.h>
#include<string.h>

int main()
{
    int i=0 , j=19 , a[20],num,temp;

    for(i=0;i<20;i++)
    {
        scanf("%d",&num);
        a[i]=num;
    }
    i=0;
    j=19;
    while(i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    for(i=0;i<20;i++)
    {
        printf("N[%d] = %d\n",i,a[i]);
    }
    return(0);
}
