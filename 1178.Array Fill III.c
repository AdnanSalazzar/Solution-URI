#include<stdio.h>
int main()
{
    int i;
    double num,N[100];

    scanf("%lf",&num);

    for(i=0;i<100;i++)
    {
        N[i] = num;
        num = num / 2;
    }

    for(i=0 ;i<100 ; i++)
    {
        printf("N[%d] = %.4f\n",i,N[i]);
    }
    return(0);
}
