#include<stdio.h>
int valida_senha (int m, int* vet);

int main (void){
   
    int vet[5], valida = 0, i;
    
    printf("Digite a senha\n");
    
    for(i = 0; i < 5; i++)
         scanf("%d", &vet[i]);
  
   valida = valida_senha (5, vet);
    
    if ( valida == 0){
         printf("Senha invalida\n");
         }
    else
         printf("Senha valida\n");
}

int valida_senha (int m, int* vet){
    int t = 0, i;
    for( i = 0; i < m - 1; i ++){
     t += vet[i];
     }
     t = t % 7;
     if ( t == vet[m-1] ){
          return 1; 
          }
          else 
          return 0;
}
