#include<stdio.h>
#include "conjfunc.h"

int menu();
int capturaCPF();

int main(void){ 

int cpf; 
Conjfuncionario *cf;
cf = getConj();
ini_Func(cf);  
system("cls");
   
   while(1){
      
      int chave = menu();
      
      switch(chave){      
      
      case 1:
         add_Func(cf);
         system("pause");
         system("cls");
         break;
         return 1;

      case 2:
         cpf = capturaCPF();
         exclui_Func(cpf,cf);
         system("pause");
         system("cls");
         break;
         return 1;
      
      case 3:
         cpf = capturaCPF();
         exibi_Func(cpf,cf);
         system("pause");
         system("cls");
         break;
         return 1;         
     
      case 4 :
         imprime_Func(cf);
         system("pause");
         system("cls");
         break;
         return 1;
         
      case 5:
         cpf = capturaCPF();         
         atualizaConj(cpf,cf);
         system("pause");
         system("cls");
         break;
         return 1;
      
      case 6:
         estatistica_Func(cf);
         system("pause");
         system("cls");
         break; 
         return 1;
      
      case 7:
         printf("Voce Saiu do Programa!\n");
         system("pause");
         system("cls");
         exit(0);  
      }      
   }   
}

int menu(){
   int opcao;
   
    printf("******************************************\n");
    printf("* 1 - Adicionar Funcionario              *\n");
    printf("* 2 - Excluir   Funcionario              *\n");
    printf("* 3 - Exibir dados de um Funcionario     *\n");
    printf("* 4 - Exibir todos os Funcionarios       *\n");
    printf("* 5 - Atualizar dados de um Funcionario  *\n");
    printf("* 6 - Estatisticas                       *\n");
    printf("* 7 - Sair                               *\n");
    printf("******************************************\n");
   
   printf("Digite a opcao desejada:\n");
   scanf("%d", &opcao);
   
   return opcao;
   
}
   
int capturaCPF(){
   int cpf;
   printf("Digite o CPF do funcionario\n");
   scanf("%d", &cpf);   
   return cpf;
}   
   
   
   
   
