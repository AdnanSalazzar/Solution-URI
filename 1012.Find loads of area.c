#include<stdio.h>
int main()
{
    double A, B, C,pie=3.14159;

    scanf("%lf %lf %lf",&A,&B,&C);

    printf("TRIANGULO: %.3lf\n",0.5*A*C);
    printf("CIRCULO: %.3lf\n",  pie * C*C);
    printf("TRAPEZIO: %.3lf\n",0.5 * (A+B)* C);
    printf("QUADRADO: %.3lf\n",B*B);
    printf("RETANGULO: %.3lf\n",A*B);

    return(0);

}
