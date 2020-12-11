#include<stdio.h>
int main()
{
    double salary,rate,salN ;///next time write else before if
    scanf("%lf",&salary);

    if(salary>=0 && salary<=400)
    {
        rate=0.15;
    }

    if(salary>=400.01 && salary<=800)
    {
        rate=0.12;
    }
    if(salary>=800.01 && salary<=1200)
    {
        rate=0.10;
    }
    if(salary>=1200.01 && salary<=2000)
    {
        rate=0.07;
    }

        if(salary>2000)
    {
        rate = 0.04;
    }

    salN = salary + (salary * rate);
    printf("Novo salario: %.2lf\n",salN);

    printf("Reajuste ganho: %.2lf\n",salary * rate);

    printf("Em percentual: %.0lf %%\n",rate * 100);

         return(0);

}
