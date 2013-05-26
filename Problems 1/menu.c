#include<stdio.h>

int somatorioimpar(int **mat, int n, int m, int x);
int somatoriopar(int **mat, int n, int m);

int main(void){
   
   int n, m, i, a, j, x, s = 0, som = 0;
   int **mat;
   printf("Digite o numero de linhas da matriz\n");
   scanf("%d", &n);
   printf("Digite o numero de colunas da matriz\n");
   scanf("%d", &m);
   
   mat = (int**)malloc(n*sizeof(int*));
   for(i = 0; i < m; i++)
     mat[i] = (int*)malloc(m*sizeof(int));
   
   printf("Digite os numeros\n");
   for(i = 0; i < n; i++)
      for(j = 0; j < m; j++)
         scanf("%d", &mat[i][j]);
   do{
      menu();
      printf("Digite sua escolha\n");
      scanf("%d", &a);
      switch(a){
         case 1:
            som = somatoriopar(mat, n, m);
            printf("\n O somatorio dos numeros pares da matriz e: %d\n", som);
         break;
         
         case 2:
            printf("Digite o valor de x\n");
            scanf("%d", &x);      
            s = somatorioimpar(mat, n, m, x);
            printf("\n O somatorio dos numeros impares maiores que %d da matriz e: %d\n", x, s);
         break;
         
         default:
            printf("Esta tecla nao tem funcao\n");
         }
     
      }while(a =!3);
   free(mat);
   }

 int somatorioimpar(int **mat, int n, int m, int x){
 
   int i , j, soma = 0;
    for(i = 0; i < n; i++)
       for(j = 0; j < m; j++)
          if((mat[i][j] % 2 == 1) && (mat[i][j] > x)){
             soma += mat[i][j];
            }
   
            return soma;
   }
   
   int somatoriopar(int **mat, int n, int m){
 
   int i , j, soma = 0;
    for(i = 0; i < n; i++)
       for(j = 0; j < m; j++)
          if(mat[i][j] % 2 == 0){
             soma += mat[i][j];
            }
   
            return soma;
   }
   
   int menu(){
   printf("******************************************************\n");
   printf("*                      MENU                          *\n");
   printf("******************************************************\n");
   printf("* 1- Somatorio de numeros pares                      *\n");      
   printf("* 2- Somatorio de numeros impares maiores que x      *\n");  
   printf("* 3- Sair                                            *\n");      
   printf("******************************************************\n");
   }
      
      
      
      
      
      
      
      