#include<stdio.h>
int main()
{
    int count=1,a;
    double num,sum=0;

    do
    {

        scanf("%lf",&num);
        if(num>=0 && num<=10)
        {
            count++;
            sum=sum+num;
        }
        else
        {
            printf("nota invalida\n");
        }
    }while(count<=2);
    printf("media = %.2lf\n",sum/2);
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d",&a);
    if(a!=2)
    {
        count=1;
    }


    return(0);
}

