#include<stdio.h>
#include<stdlib.h>
#include "lista_circ.h"

struct  lista_circ{
   int info;
   ListaCirc *prox;
};
   
ListaCirc* lst_circ_cria(){
   return NULL;
}

int lst_circ_vazia(ListaCirc *l){
   return (l==NULL);
}

ListaCirc* lst_circ_insere(ListaCirc *l, int info){
   ListaCirc* ln = (ListaCirc*)malloc(sizeof(ListaCirc));
   ln->info = info;
   if(l==NULL)
      ln->prox = ln;
   else{
      ln->prox = l->prox;
      l->prox = ln;
   }
   return ln;
}

void lst_circ_imprime(ListaCirc *l){
 if(l!=NULL){
   ListaCirc* lAux = l;
   printf("Lista de Elementos \n");
   do{
      printf("Info = %d\n",lAux->info);
      lAux = lAux->prox;
   }while(l!=lAux);
 }
}

ListaCirc* lst_circ_busca(ListaCirc *l, int info){
   if(l == NULL){
      ListaCirc* laux = l;
      if(laux == l->prox){
         if(laux->info == info)
            return laux;     
      }
      else
         while(laux != l){
            if(laux->info == info){
               return laux;
            }
            laux = l->prox;
         }
   }
      return l;      
}

ListaCirc* lst_circ_remove(ListaCirc *l, int info){
   if(l != NULL){
    ListaCirc* ant;
    ListaCirc* p = l;
      if(l == l->prox){
         if(l->info == info){
            free(l);
            return NULL;
         }
      }
      do{
        ant = p;
        p = p->prox;
        if(p->info == info){
           ant->prox = p->prox;
           free(p);
           return ant;           
        }
      }while(p != l && p->info != info);
   }
   
   return l;
   
}

void lst_circ_libera(ListaCirc *l){
   ListaCirc* p = l;
   ListaCirc* t;
   if(p == l->prox){
      free(p);    
   }
   do{
     t = p->prox;
     free(p);
     p = t;     
   }while(p != l);   
}