//TAD FILA 
 #ifndef MALA_H
  #define MALA_H
     #include "mala.h"
#endif
 
 
 typedef struct fila Fila;

//Cria uma nova fila
 Fila* getfila();

//insere um elemento na fila
 void fila_insere(Fila* f, Mala* m);
 
//retira elemento da fila
 Mala* fila_retira(Fila* f);
 
//fila vazia
 int fila_vazia(Fila* f);
 
 //verifica peso
int fila_peso_permitido(Fila* f);
 
//imprime
void imprime_fila(Fila* f); 
 
 //libera
 void fila_libera(Fila* f);