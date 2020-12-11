#include<stdio.h>
int main()
{
    int   num ,i;

    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        if(i%2==0)
        {
            printf("%d^2 = %.0lf\n",i,pow((double)i,2));
        }
    }
    return(0);
}
