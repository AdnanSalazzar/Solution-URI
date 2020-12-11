#include<stdio.h>
int main()
{
    char a1[50],a2[50],a3[50];
    scanf("%s %s %s ",a1,a2,a3);


    if( a1 == 'vertebrado' )
    {

        if( a2 == 'ave' )
        {
            if( a3 == 'carnivoro')
            {
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
        }
    }

    else
    {
        if( a3 == 'onivoro')
        {
            printf("homem\n");
        }
        else
        {
            printf("veca\n");
        }
    }


}
