#include<stdio.h>
int main()
{
    int qty,q1,q2,q3,q4,choice;
    float amount, price ;

    scanf("%d",&choice);
    scanf("%d",&qty);

    switch(choice)
{
    case 1 : price  = 4;
    break;

    case 2 : price  = 4.5;
    break;

    case 3 : price  = 5;
    break;

    case 4 : price  = 2;
    break;

    case 5 : price  = 1.5;
    break;
}
    amount = qty * price ;

    printf("Total: R$ %.2f\n",amount);
}
