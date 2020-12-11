#include<stdio.h>
int main()
{
    int N,j=0,i,start=0;
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        do
        {
            start++;
            printf("%d ",start);
            j++;
        }while(j<3);
        printf("PUM\n");
        start=start+1;
                    j=0;

    }
    return(0);
}
