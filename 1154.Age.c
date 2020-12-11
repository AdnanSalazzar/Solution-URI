#include<stdio.h>
int main()
{
    double i , age ,sum=0,count=0;

    do
    {
      scanf("%lf",&age);
        if(age<=0)
        {
            break;
        }
        sum=sum+age;
        count++;

    }while(age>=0);

    printf("%.2lf\n",sum/count);
}
