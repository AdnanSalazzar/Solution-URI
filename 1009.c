#include<stdio.h>
int main()
{
    double inc,pro,tsal;
    char  name;

    scanf("%s",&name);
    scanf("%lf",&inc);
    scanf("%lf",&pro);

    tsal=inc+( pro * 0.15 );

    printf("TOTAL = R$ %.2lf\n",tsal);

    return(0);

}
