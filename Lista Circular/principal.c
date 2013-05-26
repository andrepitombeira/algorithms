#include<stdio.h>
#include "lista_circ.h"

int main (void){
   int a;
   ListaCirc* l = lst_circ_cria();
   l = lst_circ_insere(l,10);
   l = lst_circ_insere(l,20);
   l = lst_circ_insere(l,25);
   l = lst_circ_remove(l,10);
   l = lst_circ_insere(l,30);
   lst_circ_imprime(l);
   printf("Entre com o elemento a ser buscado\n");
   scanf("%d",&a);
   if(!lst_circ_vazia(lst_circ_busca(l,a)))
      printf("Elemento encontrado!!\n");
   else
      printf("Elemento NAO encontrado!!\n");
   lst_circ_libera(l);
   return 0;
}