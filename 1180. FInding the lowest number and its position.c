#include<stdio.h>
int main()
{
    int a[1000],i,lowest_num,temp,N,pos;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }

    lowest_num = a[0];

    for(i = 1; i < N; i++ )
    {
        if(a[i] < lowest_num)
        {
           lowest_num = a[i];
           pos = i;
        }
    }

    printf("Menor valor: %d\n",lowest_num);
    printf("Posicao: %d\n",pos);
}
