#include<stdio.h>
int main()
{
    int count=1;
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
    return(0);
}
