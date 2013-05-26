#include<stdio.h>
#include<math.h>

typedef struct salario{
float b; // Sal�rio Base
float g; // Gratifica��o
} Salario;

typedef struct funcionario{
char nome[81];
Salario s;
} Funcionario;

Funcionario* getFuncionario(void);         //Prot�tipos das fun��es
void imprimeFuncionario(Funcionario *f);

int main (void) {
    Funcionario *f;
    f = getFuncionario();
    imprimeFuncionario(f);
    system("pause");
    free(f);
    return 0;
    
 }

Funcionario* getFuncionario(void){
     Funcionario *func;
     func =(Funcionario*)malloc(sizeof(Funcionario));
     printf("Digite o nome do Funcionario\n");
     scanf(" %[^\n]" , &func->nome);
     printf("Digite o Salario base\n");
     scanf("%f", &func->s.b);
     printf("Digite a Gratificacao\n");
     scanf("%f", &func->s.g);
     return func;
     
              
}

void imprimeFuncionario(Funcionario *f){
     printf("\n\t\tNome: %s\n", f->nome);
     printf("\t\tSalario: %2.f\n", f->s.b);
     printf("\t\tGratificacao: %2.f\n", f->s.g);
  }
     
     
     
     
          
