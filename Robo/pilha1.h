//TAD Pilha
#ifndef MALA_H
  #define MALA_H
     #include "mala.h"
#endif

typedef struct lista Lista;
typedef struct pilha Pilha;
   
//cria uma nova pilha
Pilha* getpilha();

//push
void pilha_push(Pilha* p, Mala* m);

//pop
Mala* pilha_pop(Pilha* p);

//verifica vazia
int pilha_vazia(Pilha* p);

//verifica peso
int pilha_peso_permitido(Pilha* p);

//Libera pilha
void pilha_libera(Pilha* p);

//Cadastra uma mala
Mala* pilha_cadastra_mala();


   
   
   
