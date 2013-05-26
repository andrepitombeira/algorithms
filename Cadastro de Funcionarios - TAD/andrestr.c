#include<stdio.h>

typedef struct funcionario{
   char nome[101];
   char cpf[12];
   float salario;
} Funcionario;

int d;
Funcionario* tab[100];

void inicializa(int n, Funcionario** tab);
void adiciona ();
void exclui();
void exibe();
void edita();
void exibe_lista();
void exibe_media_variancia();
void maior_menor_salario();

int main (void)
{
   inicializa(100, tab);
   do{
      menu();
      
      if(d==1)
         adiciona();
      
      else if(d==2)
         exclui();
      
      else if(d==3)
         exibe();
      
      else if(d==4)
         edita();
      
      else if(d==5)
         exibe_lista();
      
      else if(d==6)
         exibe_media_variancia();
      
      else if(d==7)
        maior_menor_salario();
      
      else if(d<1||d>8)
         printf("OPÇÃO INVALIDA\n\n");
   }while(d != 8);
}

int menu ()
{
   printf("**************************************************\n");
   printf("*   1 - ADICIONAR FUNCIONARIO                    *\n");
   printf("*   2 - EXCLUIR FUNCIONARIO                      *\n");
   printf("*   3 - EXIBIR DADOS DO FUNCIONARIO              *\n");
   printf("*   4 - EDITAR DADOS DO FUNCIONARIO              *\n");
   printf("*   5 - EXIBIR LISTA DE FUNCIONARIOS             *\n");
   printf("*   6 - EXIBIR MEDIA E VARIANCIA DOS SALARIOS    *\n");
   printf("*   7 - EXIBIR O MAIOR E O MENOR SALARIO         *\n");
   printf("*   8 - SAIR                                     *\n");
   printf("**************************************************\n");
   
   printf("Tecle o numero da opcao desejada: \n");
   scanf(" %d", &d);
   
   system("cls");
}

void inicializa(int n, Funcionario** tab)
{
   int i;
   for(i=0; i<n; i++)
      tab[i] = NULL;
}

void adiciona()
{ 
   int i;
   for (i=0; i<100; i++)
   {
      if (tab[i]==NULL)
      {
         tab[i] = (Funcionario*)malloc(sizeof(Funcionario));
         printf("Entre com o nome: \n");
         scanf(" %100[^\n]", tab[i]->nome);
         printf("Entre com o CPF: \n");
         scanf(" %11[^\n]", tab[i]->cpf);
         printf("Entre com o salario: \n");
         scanf(" %f", &(tab[i]->salario));
         break;
      }
   }
}

void exclui ()
{
   int i;
   printf ("Digite o codigo do funcionario a ser excluido: \n");
   scanf ("%d", &i);
   free (tab[i-1]);
   tab[i-1]=NULL;
}

void exibe()
{
   int i;
   printf ("Digite o codigo do funcionario a ser exibido: \n");
   scanf ("%d", &i);
   if (tab[i-1]==NULL)
      printf("FUNCIONARIO NAO CADASTRADO\n");
   else{
      printf("FUNCIONARIO: %d\n", i);
      printf("NOME: %s\n", tab[i-1]->nome);
      printf("CPF: %s\n", tab[i-1]->cpf);
      printf("SALARIO: %.2f\n", tab[i-1]->salario);
   }
}

void edita()
{
   int i;
   printf("Digite o codigo do funcionario a ser editado: ");
   scanf("%d", &i);
   if (tab[i-1]==NULL)
      printf("FUNCIONARIO NAO CADASTRADO\n");
   else{
      printf("Entre com o nome: \n");
      scanf(" %100[^\n]", tab[i-1]->nome);
      printf("Entre com o CPF: \n");
      scanf(" %11[^\n]", tab[i-1]->cpf);
      printf("Entre com o salario: \n");
      scanf("%f", &(tab[i-1]->salario));
   }
}

void exibe_lista()
{
   int i;
   for (i=0; i<100; i++)
   {
      if (tab[i] != NULL)
         printf("FUNCIONARIO %d: %s\n", (i+1), tab[i]->nome);
   }
}

void exibe_media_variancia()
{
   int i;
   float med=0;
   int b=0;
   float var=0;
   for (i=0; i<100; i++)
   {
      if (tab[i] != NULL)
      {
         b++;
         med += (tab[i]->salario);
      }
   }
   med = med/b;
   printf("A media e %.2f. \n", med);
   for(i=0; i<100; i++)
   {
      if (tab[i] != NULL)
      {
         var += (tab[i]->salario - med)*(tab[i]->salario - med);
      }
   }
   var = var/b;
   printf("A variancia e %.2f. \n", var);
}

void maior_menor_salario()
{
   int i;
   float maior = tab[0]->salario;
   float menor = tab[0]->salario;
   
   for (i=0; i<100; i++)
   {
      if (tab[i] != NULL)
      {
         if (tab[i]->salario > maior)
            maior = tab[i]->salario;
         if (tab[i]->salario < menor)
            menor = tab[i]->salario;
      }
   }
   printf("O maior salario e: %.2f.\n", maior);
   printf("O menor salario e: %.2f.\n", menor);
}