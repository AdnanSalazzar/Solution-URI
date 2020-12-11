#include<stdio.h>
int main()
{
    int num,place;
    scanf("%d",&num);

    printf("%d\n",num);
    place=num/100;
    printf("%d nota(s) de R$ 100,00\n",place);
    num=num-(place*100);

    place=num/50;
    printf("%d nota(s) de R$ 50,00\n",place);
    num=num-(place*50);

    place=num/20;
    printf("%d nota(s) de R$ 20,00\n",place);
    num=num-(place*20);

    place=num/10;
    printf("%d nota(s) de R$ 10,00\n",place);
    num=num-(place*10);


    place=num/5;
    printf("%d nota(s) de R$ 5,00\n",place);
    num=num-(place*5);

    place=num/2;
    printf("%d nota(s) de R$ 2,00\n",place);
    num=num-(place*2);

    place=num/1;
    printf("%d nota(s) de R$ 1,00\n",place);

    return(0);


    }
