#include<stdio.h>
int main()
{
    double a,num=0;
    int i,count=0;

    for(i=1;i<=6;i++)
    {
        scanf("%lf",&a);
        if(a>0)
        {
            count++;
            num=num+a;
        }
    }
    printf("%d valores positivos\n",count);
    printf("%.1lf\n",(double)num/count);

    return(0);
}

