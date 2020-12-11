#include<stdio.h>
int main()
{
    int ID ,hrs;
    float wperh,salary ;

    scanf("%d %d %f",&ID,&hrs,&wperh);
    salary=hrs*wperh;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",ID,salary);

}
