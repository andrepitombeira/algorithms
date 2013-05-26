#include <stdlib.h>
#include <stdio.h>
#include <time.h>
 
int main(void)
{
    int premiada, escolha, errada, troca, alternativa;
    time_t t;
 
    srand((unsigned) time(&t));
    premiada= (rand()%3)+1;               //essa é a posição premiada
                     
    while(escolha<1 || escolha>3)
    {
        system("cls");
        printf("Qual porta esconde o premio : 1, 2 ou 3 ?   ");
        scanf("%d",&escolha);
        fflush(stdin);
    }
    errada = escolha;       
    while((errada==escolha)||(errada==premiada))
        errada = (rand()%3)+1; 

    alternativa = escolha;     
    while((alternativa==escolha) || (alternativa==errada))
        alternativa = (rand()%3)+1;
 
    printf("\nA porta %d nao contem nada!!!",errada);
    printf("\n\n1 - Voce quer trocar pela porta %d;",alternativa);
    printf("\n2 - Voce quer ficar com a mesma;\n");

    while(troca!=1 && troca!=2)
    {
        printf("\nDigite sua escolha : ");
        scanf("%d",&troca);
        fflush(stdin);
    }
    switch(troca)
    {
        case 1 :  escolha = alternativa;
                  if(escolha==premiada)
                    printf("\n\nVOCE ACERTOU !!!! FEZ BEM EM TROCAR.");
                  else
                    printf("\n\nQUE PENA. SUA ESCOLHA ERA A CERTA.");
                  break;
        case 2 :  if(escolha==premiada)
                    printf("\n\nVOCE ACERTOU !!!!");
                  else
                    printf("\n\nQUE PENA. VOCE DEVERIA TER TROCADO.");
                  break;
    }

    printf("\nPorta premiada : %d\n\n",premiada);
    getchar();
 
    return(0);
}