#include<stdio.h>

typedef struct aluno{
char nome[81];
float ira;
} Aluno;


void inicializa(int n,Aluno **alunos){
int i;
for(i=0;i<n;i++)
  alunos[i] = NULL;
}


void atualiza(int n,Aluno **alunos, int i){
float ira;
if(i<0||i>=n){
printf("Indice fora do limite do vetor!!!\n");
}
printf("Entre com o nome do aluno\n");
scanf(" %[^\n]",alunos[i]->nome);
while(1){
printf("Entre com o IRA do do aluno\n");
scanf(" %f", &ira);
if(ira<0||ira>100)
printf("IRA deve pertencer ao intervalo [0.0, 100.0]\n");
else
break;
}
alunos[i]->ira = ira;
}


void exclui(int n,Aluno **alunos, int i){
if(i<0||i>=n){
printf("Indice fora do limite do vetor!!!\n");

}
alunos[i] = NULL;
}


void imprime(int n, Aluno **alunos, int i){
if(i<0 || i>=n){
printf("Indice fora do limite do vetor!!!\n");

}
if(alunos[i] != NULL){
printf("Nome: %s\n",alunos[i]->nome);
printf("Ira: %.2f\n",alunos[i]->ira);
}
}


void imprime_todos(int n, Aluno **alunos){
int i;
printf("Listagem de Alunos\n");
for(i=0;i<n;i++)
  imprime(n,alunos,i);
}


void imprime_media(int n, Aluno **alunos){
int i;
float med = 0.0f;
for(i = 0; i < n; i++){
     med += alunos[i]->ira;
    }
    med = med/n;
    printf("A media dos iras e: %2.f\n", med); 
}


void imprime_ira_maior(int n, Aluno **alunos, float x){
int i;
for(i = 0; i < n; i++)
   if(alunos[i]->ira > x){
      printf("IRA: %2.f\n", alunos[i]->ira);        
   }  
}


void imprime_media_ira_maior(int n, Aluno **alunos, float x){
int i,a = 0;
float med = 0.0f;
for(i = 0; i < n; i++)
   if(alunos[i]->ira > x){
     med += alunos[i]->ira;
     a++;        
   }  
   med = med/a;  
  printf("A media dos alunos que tem IRA maior que %2.f e: %2.f\n",x,med); 
          
}     


int main (void){
Aluno **alunos;
int i,n;
printf("Digite quantos alunos voce quer cadastrar\n");
scanf("%d", &n);
alunos = (Aluno**)malloc(n*sizeof(Aluno*));             
  if(alunos[i] == NULL){
    printf("Memoria Insufuciente\n");
  }

inicializa(n,alunos);
for(i=0;i<n;i++)
  atualiza(n,alunos,i);
imprime_todos(n,alunos);
imprime_media(n,alunos);
imprime_ira_maior(n,alunos,50.0);
imprime_media_ira_maior(n,alunos,50.0);
system("pause");
return 0;
}
