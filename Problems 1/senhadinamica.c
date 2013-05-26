#include<stdio.h>
int valida_senha (int m, int* vet);

int main (void){
   
   int *vet, valida = 0, i,n;
   
   printf("Digite a quantidade de digitos da senha\n");
   scanf("%d", &n);
    vet = (int*)malloc(n*sizeof(int));
   if(vet == NULL){
      printf("Memoria insuficiente\n");
   }
   
    printf("Digite a senha\n");
    
    for(i = 0; i < n; i++)
         scanf("%d", &vet[i]);
  
   valida = valida_senha (n, vet);
    
    if ( valida == 0){
         printf("Senha invalida\n");
         }
    else
         printf("Senha valida\n");
    free(vet);
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
