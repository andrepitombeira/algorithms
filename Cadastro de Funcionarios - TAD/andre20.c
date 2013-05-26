#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int n=0;
typedef struct funcionario
{
   char nome[81];
   char cpf[14];
   float salario;} Funcionario;Funcionario* tab[MAX];
void inicializa (int n, Funcionario** tab);
void adicionar (int n, Funcionario** tab, int i);
void remover (int n, Funcionario** tab, int i);
void imprimir (int n, Funcionario** tab, int i);
void imprimir_tudo (int n, Funcionario** tab);

int main(void)
{
   int c;
   inicializa(MAX, tab);
   
   do{
      printf("==============================\n");
      printf("|             MENU           |\n");
      printf("| 1 - Adicionar funcionario  |\n");
      printf("| 2 - Excluir funcionario    |\n");
      printf("| 3 - Imprimir lista         |\n");
      printf("| 4 - Sair                   |\n");
      printf("==============================\n");
      
      printf("Digite a opcao desejada\n");
      scanf("%d",&c);
      
      if(c==1)
         adicionar(MAX, tab, n);
      else if(c==2)
         remover(MAX, tab, n);
      else if(c==3)
         imprimir_tudo(MAX, tab);
      
   } while(c!=4);  
         return 0;
}

void inicializa(int n, Funcionario** tab)
{
   int i;
   for (i=0;i<n;i++)
      tab[i] = NULL;
}

void adicionar(int n, Funcionario** tab, int i)
{
   if(i<0 || i>=n)
   {
      printf("Indice fora do limite do vetor\n");
      exit(1);
   }
   
   if(tab[i]==NULL)
      tab[i] = (Funcionario*) malloc(sizeof(Funcionario));
   
   printf("Entre com o nome: ");
   scanf(" %80[^\n]",&tab[i]->nome);
   printf("Entre com o CPF: ");
   scanf(" %14[^\n]",&tab[i]->cpf);
   printf("Entre com o salario: ");
   scanf(" %f",&tab[i]->salario);
   
}

void remover(int n, Funcionario** tab, int i)
{
   if(i<0 || i>=n)
   {
      printf("Indice fora do limite do vetor\n");
      exit(1);
   }
   
   if(tab[i] != NULL)
   {
      free(tab[i]);
      tab[i] = NULL;
   }
}void imprimir(int n, Funcionario** tab, int i)
{
   if(i<0 || i>=n)
   {
      printf("Indice fora do limite do vetor\n");
      exit(1);
   }
   
   if(tab[i] != NULL)
   {
      printf("Nome: %s\n", tab[i]->nome);      printf("CPF: %s\n", tab[i]->cpf);      printf("Salario: %s\n", tab[i]->salario);      printf("\n\n");
   }
}void imprimir_tudo (int n, Funcionario** tab)
{
   int i;   for (i=0;i<n;i++)      imprimir(n,tab,i);
}