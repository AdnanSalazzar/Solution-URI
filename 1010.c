#include<stdio.h>
int main()
{
    double price,res,p2;
    int code,qty,qty2,code2;

    scanf("%d %d %lf",&code,&qty,&price);
    scanf("%d %d %lf",&code2,&qty2,&p2);

    res=( qty*price )+( qty2 * p2 );

    printf("VALOR A PAGAR: R$ %.2lf\n",res);

}
