#include<stdio.h>
int main()
{
    int j=7,i=1;
    while(i<=9)
    {
        while(j>=5)
        {
            printf("I=%d J=%d\n",i,j);
            j=j-1;
        }
        i=i+2;
        j=7;
    }
    return(0);
}
