#include <stdio.h>
#include<stdlib.h>
#include "func.h"

struct salario{
float b;  //Salario base
float g;  //Gratificação
};

struct funcionario{
char nome[81];
int cpf;
Salario s;
};

Funcionario* getFuncionario(){  
   Funcionario *f = (Funcionario*)malloc(sizeof(Funcionario));
   if(verifica_null(f) == 1){
      printf("Memoria insuficiente\n");
      exit(1);      
   }
  else
    atualiza_func(f);
   
   return f;
}

void exibe_func(Funcionario *f){  
   if(verifica_null(f) == 0){
      printf("\nNome: %s\n", f->nome);
      printf("CPF: %d\n", f->cpf);
      printf("Salario base: %.2f:\n", f->s.b);
      printf("Gratificacao: %.2f:\n", f->s.g);   
   }   
}

void atualiza_func(Funcionario *f){   
   printf("Digite o nome do Funcionario\n");
   scanf(" %[^\n]", &f->nome);
   printf("Digite o CPF\n");
   scanf(" %d", &f->cpf);
   printf("Digite o Salario base\n");
   scanf(" %f", &f->s.b);
   printf("Digite a Gratificacao\n");
   scanf(" %f", &f->s.g);
}

void libera_func(Funcionario *f){   
   free(f);
   f = NULL;
}

int getCpf(Funcionario *f){
   return f->cpf;   
}

float getSalBase(Funcionario *f){  
   return f->s.b;   
}

float getSalGra(Funcionario *f){
   return f->s.g;
}

float getSal(Funcionario *f){
   return f->s.b + f->s.g;
}

int verifica_null(Funcionario *f){
   if(f == NULL){
      return 1;
   }
   else 
      return 0;   
}

