#include<stdio.h>
int main()
{
    int num ;
    do
    {
        scanf("%d",&num);
        if(num!=2002)
        {
            printf("Senha Invalida\n");
        }
       else if(num==2002)
        {
            break;
        }
    }while(num!=2002);

    printf("Acesso Permitido\n");
    return(0);

}
