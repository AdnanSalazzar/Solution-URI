#include<stdio.h>
int main()
{
    double a;
    int i,count=0 ;

    for(i=1;i<=6;i++)
    {
        scanf("%lf",&a);
        if(a>0)
        {
            count++;
        }
    }
    printf("%d valores positivos\n",count);
    return(0);
}
