#include<stdio.h>
#include<stdlib.h>
#include "conjfunc.h"

typedef struct lista{
   Funcionario *info;
   struct lista *prox;
}Lista;

struct conjfuncionario{
   Lista *lista;
};

Conjfuncionario* getConj(){
   Conjfuncionario* cf = (Conjfuncionario*)malloc(sizeof(Conjfuncionario));
   if(cf == NULL){
      printf("Memoria insuficiente\n");
      exit(1);
   }
   
   ini_Func(cf);
   
   return cf;
}

void ini_Func(Conjfuncionario* cf){
   cf->lista = NULL;   
}

void atualizaConj(int cpf, Conjfuncionario* cf){
   atualiza_func(busca_Func(cpf, cf));   
}

void add_Func(Conjfuncionario* cf){
   Lista* p = cf->lista;
   Lista* ant = NULL;    
   Lista* novo = (Lista*) malloc(sizeof(Lista));    
   novo->info = getFuncionario();     
   while (p != NULL && getCpf(p->info) < getCpf(novo->info))
   { ant = p; p = p->prox; }
   if (ant == NULL)
   { 
   novo->prox = cf->lista; cf->lista = novo; }
   else { 
   novo->prox = ant->prox;
   ant->prox = novo; }
}

Funcionario* busca_Func(int cpf, Conjfuncionario* cf){
   Lista* p;
   for(p = cf->lista; p != NULL; p = p->prox)
      if(getCpf(p->info) == cpf){
         return p->info;
      }   
}


void exibi_Func(int cpf, Conjfuncionario* cf){  
   exibe_func(busca_Func(cpf, cf));      
}

void imprime_Func(Conjfuncionario* cf){
   Lista* lAux = cf->lista;
   while(lAux!=NULL){
   exibe_func(lAux->info);
   lAux = lAux->prox;
   }
}

void exclui_Func(int cpf, Conjfuncionario* cf){
   Lista* ant = NULL;
   Lista* p = cf->lista;
   while( p != NULL && getCpf(p->info) != cpf){
   ant = p;
   p = p->prox;
   }
   if(p == NULL)
     printf("Funcionario nao Encontrado!\n");
   if(ant == NULL){
      cf->lista = p->prox;
   }
   else{
      ant->prox = p->prox;
   }
   libera_func(p->info); 
   free(p);   
    
}

void estatistica_Func(Conjfuncionario* cf){
  media_FuncSalBase(cf);
  printf("\n");
  media_FuncSalGra(cf);
  printf("\n");
  media_FuncSal(cf);
  printf("\n");
  maior_FuncSalBase(cf);
  printf("\n");
  maior_FuncSalGra(cf);
  printf("\n");
  maior_FuncSal(cf);     
}

void media_FuncSalBase(Conjfuncionario* cf){
   float med = 0.0;
   int x = 0;
   Lista* lAux = cf->lista;
   while(lAux != NULL){
   med += getSalBase(lAux->info);
   x++;
   lAux = lAux->prox;
   }
   med /= x;
   printf("A media dos Salarios base e: %.2f\n", med);  
}

void media_FuncSalGra(Conjfuncionario* cf){
   float med = 0.0;
   int x = 0;
   Lista* lAux = cf->lista;
   while(lAux != NULL){
   med += getSalGra(lAux->info);
   x++;
   lAux = lAux->prox;
   }
   med /= x;
   printf("A media das Gratificacoes e: %.2f\n", med);  
}

void media_FuncSal(Conjfuncionario* cf){
   float med = 0.0;
   int x = 0;
   Lista* lAux = cf->lista;
   while(lAux != NULL){
   med += getSal(lAux->info);
   x++;
   lAux = lAux->prox;
   }
   med /= x;
   printf("A media dos Salarios e: %.2f\n", med);  
}

void maior_FuncSalBase(Conjfuncionario* cf){
   float maior = 0.0;   
   Lista* lAux = cf->lista;   
   while(lAux != NULL){
   if((getSalBase(lAux->info)) > maior){
      maior = getSalBase(lAux->info); 
   }
   lAux = lAux->prox;
   }
    printf("O maior Salario base e: %.2f\n", maior);     
}
   
void maior_FuncSalGra(Conjfuncionario* cf){
   float maior = 0.0;
   Lista* lAux = cf->lista;   
   while(lAux != NULL){
   if((getSalGra(lAux->info)) > maior){
      maior = getSalGra(lAux->info); 
   }
   lAux = lAux->prox;
   }
    printf("A maior gratificacao e: %.2f\n", maior);     
}

void maior_FuncSal(Conjfuncionario* cf){
   float maior = 0.0;
   Lista* lAux = cf->lista;   
   while(lAux != NULL){
   if((getSal(lAux->info)) > maior){
      maior = getSal(lAux->info); 
   }
   lAux = lAux->prox;
   }
    printf("O maior Salario e: %.2f\n", maior);     
}



         
