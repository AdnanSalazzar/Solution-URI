#include<stdio.h>
int main()
{
    int alco=0,gaso=0,disel=0,choice;

    printf("MUITO OBRIGADO\n");

    do
    {
        scanf("%d",&choice);

        switch(choice)
        {

       case 1: alco++;
                break;
        case 2: gaso++;
                break;
        case 3: disel++;
                break;
        }
    }while(choice!=4);

    printf("Alcool: %d\n",alco);
    printf("Gasolina: %d\n",gaso);
    printf("Diesel: %d\n",disel);
return(0);

}
