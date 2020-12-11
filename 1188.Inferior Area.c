#include<stdio.h>
int main()
{
    double M[12][12],sum = 0.0;
    char T[2];
    int row,i,j;


    scanf("%s",&T);


    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&M[i][j]);
        }
    }
int o = 1;
int k = 11;

    for(i=11; i>6; i--)
    {
        for(j = o ; j < k; j++)
        {


                sum = sum + M[i][j];
        }

            o++;
            k--;

    }

    if(T[0] == 'S')
    {
        printf("%.1lf\n",sum);
    }
    else
    {

        printf("%.1lf\n",sum/30.0);
    }
    return(0);
}





