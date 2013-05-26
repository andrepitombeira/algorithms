#ifndef MALA_H
  #define MALA_H
     #include "mala.h"
#endif
#include<stdlib.h>
#include <stdio.h>

struct mala{
char nome[51];
float peso;
};

Mala* getmala(){
   Mala* m = (Mala*)malloc(sizeof(Mala));
   if(m == NULL){
      printf("Memoria Insuficiente!\n");
      exit(1);
   }
   return m;   
}

Mala* cadastra_mala(){
   Mala* mala = getmala(); 
   printf("\nDigite o Nome do Proprietario da Mala\n");
   scanf(" %50[^\n]", mala->nome);
   printf("Digite o Peso da Mala\n");
   scanf(" %f", &mala->peso);
   return mala;   
}

float getpeso(Mala* m){
   return m->peso;   
}

void imprime_mala(Mala* m){
   printf("\nNome do Proprietario: %s\n", m->nome);
   printf("Peso: Kg %.2f\n", m->peso);   
}

void libera_mala(Mala* m){
   free(m);
}




