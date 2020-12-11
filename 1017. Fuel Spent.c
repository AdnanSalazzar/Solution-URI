#include<stdio.h>
int main()
{
    int hrs,km;
    double fuel;

    scanf("%d",&hrs);
    scanf("%d",&km);

    fuel=(km * hrs ) * 1.0/12;

    printf("%.3lf",fuel);

    return(0);
}
