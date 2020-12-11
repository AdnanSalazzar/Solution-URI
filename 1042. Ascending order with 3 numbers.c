#include<stdio.h>
int main()
{
    int a,b,c,temp,temp1,temp2,temp3;
    scanf("%d %d %d",&a,&b,&c);
    temp1=a;
    temp2=b;
    temp3=c;

    if(b<a)
    {
        temp=a;
        a=b;
        b=temp;
    }

    if(b>c)
    {
        temp=c;
        c=b;
        b=temp;
    }
     if(b<a)
    {
        temp=a;
        a=b;
        b=temp;
    }
    printf("%d\n%d\n%d\n\n",a,b,c);

    printf("%d\n%d\n%d\n",temp1,temp2,temp3);
}
