#include<stdio.h>
int main()
{
    int T,num,i,count=0,j;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        count=0;
        scanf("%d",&num);
       for(j=1;j<=num;j++)
        if(num%j==0)
       {
           count++;
       }
       if(count==2)
       {
           printf("%d eh primo\n",num);
       }
       else
       {
           printf("%d nao eh primo\n",num);
       }
    }
    return(0);
}
