#include "fila1.h"
#include <stdlib.h>

typedef struct lista{
   Mala* info;
   struct lista* prox;   
}Lista;

struct fila{
   float TOTAL;
   Lista* ini;
   Lista* fim;   
};

//Cria uma nova fila
Fila* getfila(){
   Fila* f = (Fila*)malloc(sizeof(Fila));
   if(f == NULL){
      printf("Memoria Insuficiente!\n");
      exit(1);
   }
   f->TOTAL = 100;   
   f->ini = NULL; 
   f->fim = NULL;   
   return f;   
}

//insere um elemento na fila
 void fila_insere(Fila* f, Mala* m){
    Lista* n;
    if(fila_peso_permitido(f) == 0){
      printf("Capacidade MAxima de Peso Esgotada!\n");
      exit(1);     
   }
    n = (Lista*)malloc(sizeof(Lista));
    n->info = m;
    n->prox = NULL;
    if(f->fim != NULL)
       f->fim->prox = n;
    else
       f->ini = n;
    f->fim = n;    
 }
 
//retira elemento da fila
 Mala* fila_retira(Fila* f){
    Lista* t;
    Mala* m;
    if(fila_vazia(f)){
       printf("Fila Vazia!\n");
       exit(1);      
    }
    t = f->ini;
    m = t->info;
    f->ini = t->prox;
    if(f->ini == NULL)
       f->fim = NULL;
    free(t);
    return m;    
 }
 
//fila vazia
 int fila_vazia(Fila* f){
    return (f->ini == NULL);    
 }
 
 //verifica peso
 int fila_peso_permitido(Fila* f){
   Lista* q = f->ini;
   float total = 0;
   while(q != NULL){
      total = getpeso(q->info);
      q = q->prox;         }
   if(total <= f->TOTAL){
      return 1;
   }
   else
      return 0;         
}

//imprime
void imprime_fila(Fila* f){
   Lista* p = f->ini;
   while(p != NULL){
      imprime_mala(p->info);      
      p = p->prox;   
   }   
}

void fila_libera(Fila* f){
   Lista* l = f->ini;
   while(l != NULL){   Lista* t = l;
   libera_mala(l->info);   
   free(l);
   l = t->prox;  
   }
   free(f);   
}