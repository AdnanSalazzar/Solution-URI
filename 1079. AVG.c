#include<stdio.h>
int main()
{
    int  i,N;
    double avg,tot,a,b,c;

    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%lf %lf %lf",&a,&b,&c);
        tot=a*2 +b*3 +c*5;
        printf("%.1lf\n",tot/10);
    }
    return(0);
}
