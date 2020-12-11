#include<stdio.h>
int main()
{
    int i=1,j=7;

    while(i<=9)
    {
        while(j-i>=4)
        {
            printf("I=%d J=%d\n",i,j);
            if(j-i==4)
            {
                break;
            }
            else
             {
                j--;
             }

        }
        i=i+2;
        j=j+4;
    }
    return(0);

}
