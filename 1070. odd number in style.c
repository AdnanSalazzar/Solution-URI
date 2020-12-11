#include<stdio.h>
int main()
{
    int i,n,a,odd;
    scanf("%d",&a);
    for(i=a;i<(a+(6*2));i=i+2) ///why  multiply by 2 ???
    {
       if(i%2==0)
       {
           odd = i + 1 ;

           printf("%d\n",odd);
       }
       else
       {
           odd = i;
           printf("%d\n",odd);
       }
    }
    return(0);
}
