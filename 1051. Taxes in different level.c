#include<stdio.h>
int main()
{
    float num,sal1,sal2,sal3;
    scanf("%f",&num);

    if(num>=0 && num<=2000)
    {
        printf("Isento\n");
    }

    else if(num>=0 && num<=3000)
    {
        num=2000-num;
        sal1 = 2000 + ( num * 0.08);
        printf("R$ %.2f\n",sal1);
    }

    else if(num>=3000.01 && num<=4500.00 )
    {
        num=5000-num;
        sal1=3000 * 0.08;
        sal2= num * 0.18;
        printf("R$ %.2f\n",sal1 + sal2);
    }

    else
    {
        num=num-4500;
        sal1=3000 * 0.08;
        sal2= 4500 * 0.18;
        sal3= num * 0.28;
        printf("R$ %.2f\n",sal1 + sal2 +sal3);

    }
    return(0);

}
