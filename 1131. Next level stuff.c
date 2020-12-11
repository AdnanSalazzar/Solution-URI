#include<stdio.h>
int main()
{
    int match=0,inter=0,germo=0,draw=0,I,G,check,scorei=0,scoreg=0;

    do
    {
        scanf("%d%d",&I,&G);
        match++;
                inter=inter+I;
                        germo=germo+G;


        if(I>G)
        {
        scorei++;
        }
        if(I<G)
        {
            scoreg++;
        }
        if(I==G)
        {
            draw++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&check);
    }while(check==1);

    printf("%d grenais\n",match);
    printf("Inter:%d\n",scorei);
    printf("Gremio:%d\n",scoreg);
    printf("Empates:%d\n",draw);
    if(inter>germo)
    {
        printf("Inter venceu mais\n");
    }
     else if(inter<germo)
    {
        printf("Gremio venceu mais\n");
    }
    else if(inter==germo)
    {
        printf("Não houve vencedor\n");
    }
    return(0);
}
