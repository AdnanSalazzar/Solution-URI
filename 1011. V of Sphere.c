#include<stdio.h>
int main()
{
    double vol,pie=3.14159,R;

    scanf("%lf",&R);

    vol= ((4.0/3)*pie* R*R*R);

    printf("VOLUME = %.3lf\n",vol);

    return(0);
}
