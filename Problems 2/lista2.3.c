#include<stdio.h>
#include<math.h>
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


int main (void) {
    int i;
    Funcionario *func[MAX];
    inicializa(func, MAX);
    for(i = 0; i < MAX; i++)
        atualizaFuncionario(MAX, func, i) ;
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
     int p, i;
     printf("Digite a posicao do funcionario no vetor\n");
     scanf("%d", &p);
     for(i = 0; i < n; i++)
      if(i == p){
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
     
     
     
          
