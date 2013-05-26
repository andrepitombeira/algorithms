#include<stdio.h>
#include<math.h>
#include<string.h>
#define MAX 2

typedef struct salario{
float b; // Salário Base
float g; // Gratificação
} Salario;

typedef struct funcionario{
char nome[81];
Salario s;
} Funcionario;

void atualizaFuncionario(int n, Funcionario **func, int i);                     //Protótipos das funções
void imprimeFuncionario(Funcionario **func, int n);
void inicializa(Funcionario **func, int n);
//void bolhaNome(int n, Funcionario **funcionarios);
//void bolhaSalarioBase(int n, Funcionario **funcionarios);
void bolhaSalario(int n, Funcionario **funcionarios);


int main (void) {
    int i;
    Funcionario *func[MAX];
    inicializa(func, MAX);
    for(i = 0; i < MAX; i++)
        atualizaFuncionario(MAX, func, i) ;
   // bolhaNome(MAX, func);
    //imprimeFuncionario(func, MAX);
    //bolhaSalarioBase(MAX, func);
    //imprimeFuncionario(func, MAX);
    bolhaSalario(MAX, func);
    imprimeFuncionario(func, MAX);
    system("pause");
    free(func);
    return 0;
    
 }

void atualizaFuncionario(int n, Funcionario **func, int i){
     
     if(i < 0 || i >n){
          printf("Indice fora do limite do Vetor\n");
          }
    
     if(func[i] == NULL){
     func[i] =(Funcionario*)malloc(sizeof(Funcionario));
         if(func[i] == NULL){
         printf("Memoria insuficiente!!\n");
         exit(1);
         }
     }
     printf("Digite o nome do Funcionario\n");
     scanf(" %[^\n]" , &func[i]->nome);
     printf("Digite o Salario base\n");
     scanf("%f", &func[i]->s.b);
     printf("Digite a Gratificacao\n");
     scanf("%f", &func[i]->s.g);
         
     }

void imprimeFuncionario(Funcionario **func, int n){
      int i;     
      for(i = 0; i < n; i++){      
        printf("\n\t\tNome: %s\n", func[i]->nome);
        printf("\t\tSalario: %2.f\n", func[i]->s.b);
        printf("\t\tGratificacao: %2.f\n", func[i]->s.g);
      }
      
  }
  
void inicializa(Funcionario **func, int n){
     int i;
     for(i = 0; i < n; i++)
        func[i] = NULL;    
     }   

/*void bolhaNome(int n, Funcionario **funcionarios){
   int i, j;
   int troca = 0;
   Funcionario *tempFuncionario;
   for(i=n-1; i>0; i--){
   troca = 0;
   for(j=0; j<i; j++)
   if(strcmp(funcionarios[j]->nome, funcionarios[j+1]->nome)>0){
   tempFuncionario = funcionarios[j];
   funcionarios[j] = funcionarios[j+1];
   funcionarios[j+1] = tempFuncionario;
   troca = 1;
   }
   if(troca==0)
   return;
   }
}*/

/*void bolhaSalarioBase(int n, Funcionario **funcionarios){
   
   int i, j;
   int troca = 0;
   Funcionario *tempFuncionario;
   for(i=n-1; i>0; i--){
   troca = 0;
   for(j=0; j<i; j++)
   if(funcionarios[j]->s.b > funcionarios[j+1]->s.b){
   tempFuncionario = funcionarios[j];
   funcionarios[j] = funcionarios[j+1];
   funcionarios[j+1] = tempFuncionario;
   troca = 1;
   }
   if(troca==0)
   return;
}   
   
 }    
     
 */
void bolhaSalario(int n, Funcionario **funcionarios){
   
   int i, j;
   int troca = 0;
   Funcionario *tempFuncionario;
   for(i=n-1; i>0; i--){
   troca = 0;
   for(j=0; j<i; j++)
   if((funcionarios[j]->s.b + funcionarios[j]->s.g) > (funcionarios[j+1]->s.b + funcionarios[j]->s.g)){
   tempFuncionario = funcionarios[j];
   funcionarios[j] = funcionarios[j+1];
   funcionarios[j+1] = tempFuncionario;
   troca = 1;
   }
   if(troca==0)
   return;
}   
   
 }

          
