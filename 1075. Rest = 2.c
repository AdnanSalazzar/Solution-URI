#include<stdio.h>
int main()
{
    int i , N;
scanf("%i",&N);
    for(i=1;i<=100000;i++)
    {
        if(i%N==2)
        {
            printf("%i\n",i);
        }

    }
    return(0);
}
