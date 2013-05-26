/*JOGO DA VELHA*/
/*FUNDAMENTOS DE PROGRAMAÇÃO*/
/*PROF: DAVI ROMERO*/
/*ANDRÉ LUÍS PIOTOMBEIRA*/


#include<stdio.h>
void imprimir(char m[][3]);   /*Imprimi na tela o tabuleiro*/
void le(int *x, int *y);      /*Lê as coordenadas passadas pelos jogadores*/
void jogador1(char m[][3]);  /*Captura a jogada do jogador 1*/
void jogador2(char m[][3]);  /*Captura a jogada do jogador 2*/
int fim(char m[][3]);
int main(void)
{                            /*Inicializa a matriz*/
   int i, j, z=0;
   char m[3][3];
   for(i=0; i<3; i++)
      for(j=0; j<3; j++)
         m[i][j]=' ';
   imprimir(m);
     printf("\n\t\t Bem vindo ao Jogo da Velha\n");
   do
  {
  jogador1(m);   /*O jogador 1 joga*/
  imprimir(m);    /*Imprime na tela a jogada*/
  fim(m);         /*Verifica a jogada*/
   if(fim(m))     /*Condição que verifica se ele venceu*/
   {
     printf("\n\t\t Jogador 1 Venceu\n");
     return 0;
   }
   z++;
   if(z==9)        /*Quando o numero de jogadas for igual a 9 para*/
   {
    break;
   }
   jogador2(m);   /*O jogador 2 joga*/
   imprimir(m);    /*Imprime na tela a jogada*/
   fim(m);         /*Verifica a jogada*/
    if(fim(m))     /*Condição que verifica se ele venceu*/
    {
      printf("\n\t\t Jogador 2 Venceu\n");
      return 0;
    }
   z++;
   }
   while(z!=9);    /*Jogar ate que o numero de jogadas seja igual a 9*/
   printf("\n Jogo Empatado");
   return 0;   
}
void imprimir(char m[][3])   /*Esta função imprime na tela o tabuleiro do jogo*/
{
   printf("\n\n\t   %c | %c | %c\n", m[0][0], m[0][1], m[0][2]);
   printf("\t  ---+---+---\n");
   printf("\t   %c | %c | %c\n", m[1][0], m[1][1], m[1][2]);
   printf("\t  ---+---+---\n");
   printf("\t   %c | %c | %c\n\n", m[2][0], m[2][1], m[2][2]);
}  
void jogador1(char m[][3])  /*Esta função captura a jogada do jogador 1*/
{
   int x, y;
   printf("\n\t\t\t  Jogador 1\n");
   le(&x, &y);               /* Le as coordenadas*/
   if(m[x][y]==' ')          
      m[x][y]='x';           /* Se a coordenada escolhida estiver em branco ela receberá um x*/
   else
      jogador1(m);          /* Senao ela repetira ate que a coordenada seja um espaço em branco*/
      
}

void jogador2(char m[][3])  /*Esta função captura a jogada do jogador 2*/
{
   int x, y;
   printf("\n\t\t\t  Jogador 2\n");
   le(&x, &y);               /* Le as coordenadas*/
   if(m[x][y]==' ')
      m[x][y]='o';           /* Se a coordenada escolhida estiver em branco ela receberá um o*/
   else
      jogador2(m);          /* Senao ela repetira ate que a coordenada seja um espaço em branco*/
}     
void le(int *x, int *y)      /*Função que le as coordenadas dadas pelos jogadores*/
{
   do
   {
    int p,q;
    printf("Entre com as coordenadas\n");
      printf("Linha\n");
      scanf("%d",&p);
      printf("Coluna\n");
      scanf("%d",&q);
    *x=p;
    *y=q;
   }
   while(*x<0||*x>2||*y<0||*y>2); /*Executara enquanto não satisfazer a condição do x e y*/
}
int fim(char m[][3])    /*Verifica se ha vencedor*/
{
   int t;
   for(t=0; t<3; t++)
   {                
    if((m[t][0]=='x' && m[t][1]=='x' && m[t][2]=='x')||(m[0][t]=='x' && m[1][t]=='x' && m[2][t]=='x'))  /*Verifica linhas e colunas*/
    return 1;
    if((m[t][0]=='o' && m[t][1]=='o' && m[t][2]=='o')||(m[0][t]=='o' && m[1][t]=='o' && m[2][t]=='o'))
    return 1;
    if((m[0][0]=='x' && m[1][1]=='x' && m[2][2]=='x')||(m[0][2]=='x' && m[1][1]=='x' && m[2][0]=='x'))  /*Verifica diagonais*/
    return 1;
    if((m[0][0]=='o' && m[1][1]=='o' && m[2][2]=='o')||(m[0][2]=='o' && m[1][1]=='o' && m[2][0]=='o'))
    return 1;
   }
   return 0;
}





























      