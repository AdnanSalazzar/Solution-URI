#include<stdio.h>
int main()
{
    int i,N;
    double a,b;

    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        scanf("%lf%lf",&a,&b);

        if(b==0)
            {
                printf("divisao impossive\n");
            }
            else
            {
                printf("%.1lf\n",(a/b));
            }
    }
    return(0);
}
