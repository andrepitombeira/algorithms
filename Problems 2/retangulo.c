#include<stdio.h>
typedef struct ponto{
   float x;
   float y;
}Ponto;
typedef struct retangulo{
   Ponto p1;
   Ponto p2;
}Retangulo;

void capturaRetangulo(struct retangulo *ret);
void capturaPonto(struct ponto *p);
int dentro_ret(Retangulo *ret, Ponto *p); 

int main(void){
   Ponto p;
   Retangulo ret;
   capturaRetangulo(&ret);   
   capturaPonto(&p);
   if(dentro_ret(&ret, &p))
      printf("O ponto pertence ao retangulo\n");
   else
      printf("O ponto nao pertence ao retangulo\n");
   
   system("pause");
}

void capturaRetangulo(struct retangulo *ret){
   
   printf("PONTO INFERIOR ESQUERDO:\n");
   capturaPonto(&ret->p1);
   printf("PONTO SUPERIOR DIREITO:\n");
   capturaPonto(&ret->p2);

   }

void capturaPonto(struct ponto *p){
   
   printf("Digite as coordenadas do Ponto\n");
   scanf(" %f %f", &p->x, &p->y);
   
}

int dentro_ret(Retangulo *ret, Ponto *p){
      
   if((p->x > ret->p1.x && p->y > ret->p1.y) && (p->x < ret->p2.x && p->y < ret->p2.y))
      return 1;
   else
       return 0;

   }
   
