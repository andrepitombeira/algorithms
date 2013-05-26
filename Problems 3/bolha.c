#include<stdio.h>

void bolhaA(int n, int *v);
void bolhaB(int n, int *v);
void bolhaC(int n, int *v);
void captura(int n, int *v);
void imprime(int n, int *v);

int main(void){
 int n; 
 int *v;
 int *vet;
 int *vetor;
   
   printf("Entre com o numero de elementos do vetor\n");
   scanf("%d", &n);
   v = (int*)malloc(n*sizeof(int));
   vet = (int*)malloc(n*sizeof(int));
   vetor = (int*)malloc(n*sizeof(int));
   captura(n, v);
   captura(n, vet);
   captura(n, vetor);
   bolhaA(n, v);
   bolhaB(n, vet);
   bolhaC(n, vetor);
   imprime(n,v);
   imprime(n, vet);
   imprime(n, vetor);
      
}

void bolhaA(int n, int *v){
int i, j, temp;
for(i=0; i<n-1; i++){
int troca = 0;
for(j=n-1; j>0; j--)
if(v[j] < v[j-1]){
temp = v[j]; // Troca
v[j] = v[j-1];
v[j-1] = temp;
troca = 1;
}
if(troca==0)
return;
}
}

void captura(int n, int *v){
   int i;
   printf("\nDigite os elementos do vetor\n");
   for(i = 0; i < n; i++)
      scanf("%d",&v[i]);   
}

void imprime(int n, int *v){
   int i;
   printf("\nOs elementos do vetor em ordenados sao:\n");
   for(i = 0; i < n; i++)
      printf("\t\t%d\n", v[i]);   
}

void bolhaB(int n, int *v){
int i, j, temp;
for(i=0; i<n; i++){
int troca = 0;
for(j=n-1; j>0; j--)
if(v[j] > v[j-1]){
temp = v[j]; // Troca
v[j] = v[j-1];
v[j-1] = temp;
troca = 1;
}
if(troca==0)
return;
}
}
void bolhaC(int n, int *v){
int i, j, temp;
for(i=n-1; i>0; i--){
int troca = 0;
for(j=0; j<n-1; j++)
if(v[j] < v[j+1]){
temp = v[j]; // Troca
v[j] = v[j+1];
v[j+1] = temp;
troca = 1;
}
if(troca==0)
return;
}


}



