#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c;
    double sqr;
   scanf("%lf",&a);
   scanf("%lf",&b);
   scanf("%lf",&c);

    sqr=(b*b) -(4*a*c);

    if(a!=0 && sqr>0)
    {
        double ans1 ,ans2 ;
        sqr=sqrt(sqr);
        ans1= ((-b + sqr)/2*a);
        ans2= ((-b - sqr)/2*a);

        printf("R1 = %.5lf\nR2 = %.5lf\n",ans1,ans2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }

    return(0);
}
