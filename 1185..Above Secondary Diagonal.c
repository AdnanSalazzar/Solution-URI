#include<stdio.h>
int main()
{
    double M[12][12],sum = 0.0;
    char T[2];
    int row,i,j;


    scanf("%d",&row);
    scanf("%s",&T);


    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&M[i][j]);
        }
    }


    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            if( i + j >= 12)
            {
                sum = sum + M[i][j];

            }
        }
    }

    if(T == 'S')
    {
        printf("%.1lf\n",sum);
    }
    else if(T[0] == 'M')
    {

        printf("%.1lf\n",sum/66.0);
    }
    return(0);
}



