#include<stdio.h>
int facto();

int main()
{
    int num,ans;

    scanf("%d",&num);

    ans=facto(num);

    printf("%d\n",ans);
    return(0);
}

int facto(int num)
{
    int res;

    if(num==1)
    {
        res=1;
    }

    else
    {
        res=num*facto(num-1);
    }

    return(res);
}
