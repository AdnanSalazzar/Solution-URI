#include<stdio.h>
int main()
{
    int KM;
    double fuel;
    scanf("%d %lf",&KM,&fuel);

    printf("%.3lf km/l\n",KM/fuel);

    return(0);
}

