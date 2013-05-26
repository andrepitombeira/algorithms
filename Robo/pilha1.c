#include "pilha1.h"
#include<stdlib.h>


struct lista{
   Mala* info;
   struct lista* prox;   
};

struct pilha{
   float TOTAL;
   Lista* prim;   
};

//cria uma nova pilha
Pilha* getpilha(){
   Pilha* p = (Pilha*)malloc(sizeof(Pilha));
   if(p == NULL){
      printf("Memoria Insuficiente!\n");
      exit(1);
   }   
   p->prim = NULL;
   p->TOTAL = 100;
   return p;   
}

//push
void pilha_push(Pilha* p, Mala* m){
   Lista* n;
   if(pilha_peso_permitido(p) == 0){
     printf("Capacidade Maxima de Peso Esgotada!\n");
     exit(1);     
   }
   n = (Lista*)malloc(sizeof(Lista));
   n->info = m;
   n->prox = p->prim;
   p->prim = n; 
         
}

//pop
Mala* pilha_pop(Pilha* p){
   Lista* t;
   Mala* m;
   if(pilha_vazia(p)){
      printf("Pilha Vazia!\n");
      exit(1);     
   }
   t = p->prim;
   m = t->info;
   p->prim = t->prox;
   free(t);
   return m;   
}

//verifica vazia
int pilha_vazia(Pilha* p){
   return(p->prim == NULL);   
}

//Libera pilha
void pilha_libera(Pilha* p){
   Lista* q = p->prim;
   while(q != NULL){
      Lista* t = q->prox;
      libera_mala(q->info);
      free(q);
      q = t;
   }
   free(p);   
}

//verifica peso
int pilha_peso_permitido(Pilha* p){
   Lista* q = p->prim;
   float total = 0;
   while(q != NULL){
      total += getpeso(q->info);
      q = q->prox;         }
   if(total <= p->TOTAL)
      return 1;
   else 
      return 0;
}

Mala* pilha_cadastra_mala(){
   Mala* m = cadastra_mala();
   return m;   
}




