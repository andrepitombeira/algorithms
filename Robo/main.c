#include <stdio.h>
#include <stdlib.h>
#include "pilha1.h"
#include "fila1.h"

int menu();
int passageiros();
Pilha* embarque(int n);
void desembarque();

int main(void){
    Pilha* p;
    int passag;
   int op; 
   do{  
      op = menu();      
      switch(op){
      case 1:
        passag = passageiros();       
      break;
      
      case 2:         
         p = embarque(passag);            
      break;
      
      case 3:                 
         desembarque(p);         
      break;   
      
      case 4:
         exit(1);          
      break;

      }  
   }while(op != 4); 
}

int menu(){
   int escolha;
   printf("************************************\n");
   printf("1. Numero de Passageiros           *\n"); 
   printf("2. Embarque das Malas              *\n"); 
   printf("3. Desembarque                     *\n"); 
   printf("4. Sair                            *\n"); 
   printf("************************************\n");
   
   printf("Digite a Opcao Desejada\n");
   scanf(" %d", &escolha);
   
   return escolha;   
   
}

int passageiros(){
   int n;
   printf("Digite o Numero de Passageiros\n");
   scanf("%d", &n);
   printf("\nPassageiros Cadastrados com Sucesso!\n");   
   return n;   
}

Pilha* embarque(int n){ 
   int i;   
   Pilha* p = getpilha();   
   for(i = 0; i <n; i++){  
      Mala* m = cadastra_mala();     
      pilha_push(p,m);
   }     
   printf("\nEmbarque Realizado com Sucesso!\n"); 
   return p;   
}

void desembarque(Pilha* p){   
   Fila* f = getfila();
   while(!pilha_vazia(p)){
      Mala* m = pilha_pop(p);
      fila_insere(f,m);     
   }
   imprime_fila(f);
   pilha_libera(p);
   fila_libera(f);
   printf("\nDesembarque Realizado com Sucesso!\n");
}