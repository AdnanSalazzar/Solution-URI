
#include<stdio.h>
int main()
{
    float a,b,c,area;
    scanf("%f %f %f",&a,&b,&c);

    if(c<a+b && a< b+c && b<a+c )
    {
       printf("Perimetro = %.1f\n",a+b+c);
    }
    else
    {
        area = 0.5 * (a+b) * c;
        printf("Area = %.1f\n",area);
    }
}
