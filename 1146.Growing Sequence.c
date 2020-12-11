#include<stdio.h>
int main()
{
    int num,i;
    do{

        scanf("%d",&num);
        for(i=1;i<num;i++)
        {
            printf("%d ",i);

        }
        if(num!=0)
        {
            printf("%d\n",num);
        }

    }while(num!=0);

    return(0);
}
