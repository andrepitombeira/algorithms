#include<stdio.h>

float mIndividual(float *v, int m,int a);
float mGeral(float *v, int m, int n);

int main(void){
   int a, n, m, i, j;
   float *v;
   printf("Digite o numero de alunos\n");
   scanf("%d", &n);
   printf("Digite o numero de notas\n");
   scanf("%d", &m);
   v = (float*)malloc(n*m*sizeof(float));
   printf("Cadastre as notas\n");
   for(i = 0; i < n; i++)
      for(j = 0; j < m; j++)
         scanf("%f", &v[i * m + j]);
   do{
   printf("\nDeseja saber a nota de que aluno: ");
   scanf("%d",&a);
   }while(a < 1 || a > n);
   printf("\nA media do aluno %d = %5.2f", a, mIndividual(v, m, a-1) );
   printf("\nA media geral = %5.2f",mGeral(v,m,n) );
   free(v);
}

float mIndividual(float *v, int m, int a){
   float media = 0.0f;
   int i;
   for (i = 0; i < m; i++)
      media += v[a * m + i];
      
   media = media/m;
         
   return media;
}

 float mGeral(float *v, int n, int m){
   float med = 0.0f;
   int i; 
   for (i = 0; i < n; i++)
      med += mIndividual(v, m, i);
        
   return med/n;
}