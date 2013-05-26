#include<stdio.h>
#include<stdlib.h>
#include "conjfunc.h"
#define MAX 100

struct salario{
float b;  //Salario base
float g;  //Gratificação
};

struct funcionario{
char nome[81];
int cpf;
Salario s;
};

struct conjfuncionario{
   Funcionario *func[MAX];   
};

Conjfuncionario* getConj(){
   Conjfuncionario* cf = (Conjfuncionario*)malloc(sizeof(Conjfuncionario));
   if(cf == NULL){
      printf("Memoria Insuficiente\n");
      exit(1);
   }
   return cf;
}

void ini_Func(Conjfuncionario* cf){   
   int i;
   for(i = 0; i < MAX; i++)
      cf->func[i] = NULL;    
}

void add_Func(Conjfuncionario* cf){
   int i;
   for(i = 0; i < MAX; i++)
      if(verifica_null(cf->func[i]) == 1){
         cf->func[i] = getFuncionario();
         break;
      }   
   ordena_Func(cf); 
   printf("Funcionario Adicionado com Sucesso!\n");
}

int busca_indice_Func(int cpf, Conjfuncionario* cf){
   int i;
   for(i = 0; i < MAX; i++){
      if(verifica_null(cf->func[i]) == 0){
         if(getCpf(cf->func[i]) == cpf){
         return i;
         }
      }
   }
     printf("Funcionario Nao Encontrado!\n");
     return -1; 
}   


Funcionario* busca_Func(int cpf, Conjfuncionario* cf){
   int i = busca_indice_Func(cpf,cf);
   if(i!=-1)
      return cf->func[i];
   else
      return NULL; 
}   

void atualizaConj(int cpf, Conjfuncionario* cf){
   int i; 
      if(busca_Func(cpf,cf) != 0){     
         for(i = 0; i < MAX; i++){
            if(verifica_null(cf->func[i]) == 0){
               if(getCpf(cf->func[i]) == cpf){
                  atualiza_func(cf->func[i]); 
                  ordena_Func(cf);
                  printf("Funcionario Atualizado com Sucesso!\n");
                  break;
            }
         }
      }
   } 
    else   
     printf("CPF Invalido!\n");
}

void exibi_Func(int cpf, Conjfuncionario* cf){
    if(busca_Func(cpf,cf) != NULL){  
      exibe_func(busca_Func(cpf, cf));
    }
    else
      printf("CPF Invalido!\n");    
}

void imprime_Func(Conjfuncionario* cf){
   int i;
   for(i = 0; i < MAX; i++)
     if(verifica_null(cf->func[i]) == 0){
      exibe_func(cf->func[i]); 
      printf("\n");
     }        
}

void exclui_Func(int cpf, Conjfuncionario* cf){ 
      int i= busca_indice_Func(cpf,cf);
      if(i != -1){  
         libera_func(cf->func[i]);
          cf->func[i] = NULL;
          ordena_Func(cf);         
         printf("Funcionario Excluido com Sucesso\n"); 
      }
      else
         printf("CPF Invalido!\n");   
}

void ordena_Func(Conjfuncionario* cf){
   int i, j;
   int troca = 0, cont = 0;
   Funcionario *temp;
   
   while(1){
      int a = 0, b = MAX-1;
      
      while(a < MAX && cf->func[i]!=NULL)
         a++;
      while(b>0 && cf->func[i] == NULL)
         b--;
      if(b>a){
         //troca.
         temp = cf->func[a];
         cf->func[a] = cf->func[b];
         cf->func[b] = temp;
      }
      else
         break;
   }
   
   for(i=0;i<MAX;i++){
      if(verifica_null(cf->func[i]) == 0)
         cont++;
   }
   
   for(i = cont-1; i > 0; i--){
      troca = 0;
      for(j = 0; j < i ;j++){         
         if((getCpf(cf->func[j])) > (getCpf(cf->func[j+1]))){
            temp = cf->func[j];
            cf->func[j] = cf->func[j+1];
            cf->func[j+1] = temp;
            troca = 1;
         }
         if(troca == 0)
            return;
      }
   }
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
  printf("\n");   
}

void media_FuncSalBase(Conjfuncionario* cf){
   int i, x = 0;
   float med = 0.0;
   for(i = 0; i < MAX; i++){
      if(verifica_null(cf->func[i]) == 0){
      med += getSalBase(cf->func[i]);
      x++;
      }
   }  
   med /= x;
   printf("A Media dos Salarios Base e: %.2f\n", med);   
   
}

void media_FuncSalGra(Conjfuncionario* cf){
   int i, x = 0;
   float  med = 0.0;
   for(i = 0; i < MAX; i++){
      if(verifica_null(cf->func[i]) == 0){
      med += getSalGra(cf->func[i]);
      x++;
       }
   }  
   med /= x;
   printf("A Media das Gratificacoes e: %.2f\n", med);   
   
}

void media_FuncSal(Conjfuncionario* cf){
   int i,x = 0;
   float med = 0.0;
   for(i = 0; i < MAX; i++){
      if(verifica_null(cf->func[i]) == 0){
      med += getSal(cf->func[i]);
      x++;
       }
   }  
   med /= x;
   printf("A media dos Salarios e: %.2f\n", med);   
   
}

void maior_FuncSalBase(Conjfuncionario* cf){
  int i;
  float maior = 0.0;   
  for(i = 0; i < MAX; i++){
     if(verifica_null(cf->func[i]) == 0){       
        if(getSalBase(cf->func[i]) > maior){
           maior = getSalBase(cf->func[i]); 
         }
      }
   }
   printf("O Maior Salario Base e: %.2f\n", maior);      
}

void maior_FuncSalGra(Conjfuncionario* cf){
  int i;
  float maior = 0.0;
  for( i = 0; i < MAX; i++)
     if(verifica_null(cf->func[i]) == 0){
        if((getSalGra(cf->func[i])) > maior){
           maior = getSalGra(cf->func[i]); 
     }
  }
   printf("A Maior Gratficacao e: %.2f\n", maior);      
}

void maior_FuncSal(Conjfuncionario* cf){
  int i;
  float maior = 0.0;
  for( i = 0; i < MAX; i++)
     if(verifica_null(cf->func[i]) == 0){
        if(getSal(cf->func[i]) > maior){
           maior = getSal(cf->func[i]); 
     }
  }
   printf("O Maior Salario e: %.2f\n", maior);      
}



