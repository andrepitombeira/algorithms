#include<stdio.h>

int somatorio(int **mat, int n, int m);

int main(void){
   
   int n, m, i, j, s = 0;
   int **mat;
   printf("Digite o numero de linhas da matriz\n");
   scanf("%d", &n);
   printf("Digite o numero de colunas da matriz\n");
   scanf("%d", &m);
   
   mat = (int**)malloc(n*sizeof(int*));
   for(i=0; i<m; i++)
      mat[i] = (int*)malloc(m*sizeof(int));
   
   printf("Digite os numeros\n");
   for(i = 0; i < n; i++)
      for(j = 0; j < m; j++)
         scanf("%d", &mat[i][j]);
   s = somatorio(mat, n, m);
   printf("\n\t\tO somatorio dos numeros pares da matriz e: %d\n", s);
   free(mat);
   }

 int somatorio(int **mat, int n, int m){
 
   int i , j, soma = 0;
    for(i = 0; i < n; i++){
       for(j = 0; j < m; j++){
          if(mat[i][j] % 2 == 0){
             soma += mat[i][j];
            }
         }
      }
   
            return soma;
   }