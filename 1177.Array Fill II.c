#include<stdio.h>
int main()
{
    int i,j=0,n,element[1000];
    scanf("%d",&n);
    for(i = 0;i < 1000; i++)
    {
       element[i] =  j;
       j++;
       if(j==n)
       {
           j=0;
       }

    }

    for(i=0;i<1000; i++)
    {
        printf("N[%d] = %d\n",i,element[i]);
    }
    return(0);
}
