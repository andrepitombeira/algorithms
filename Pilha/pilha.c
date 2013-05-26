//Exercícios pág. 217

struct lista{
   float info;
   struct lista* prox;
}

struct pilha{
   Lista* prim;
}

Pilha* pilha_cria(void){
   Pilha *p = (Pilha*)malloc(sizeof(Pilha));
   if(p == NULL){
      printf("Memoria Insuficiente\n");
      exit(1);
   }
   p->prim = NULL;
   return p;   
}

void pilha_push(Pilha* p, float v){
   Lista* n = (Lista*) malloc(sizeof(Lista));
   n->info = v;
   n->prox = p->prim;
   p->prim = n;   
}

float pilha_pop(Pilha* p){
   Lista* t;
   float v;
   if(p->prim == NULL){
      printf("Pilha vazia\n");
      exit(1);      
   }
   t = p->prim;
   v = t->info;
   p->prim = t->prox;
   free(t);
   return v;   
}

int pilha_vazia(Pilha* p){
   return (p->prim == NULL);   
}

void pilha_libera(Pilha* p){
   Lista* q = p->prim;
   while(q != NULL){
      Lista* t = q->prox;
      free(q);
      q = t;
   }
   free(p);      
   }
   
float topo(Pilha* p){
   pilha_pop(p);
   pilha_push(p);
}
   
void concatena_pilhas(Pilha* p1, Pilha* p2){
   Pilha* aux; 
   while(pilha_vazia(p2)){
      aux = p->prim;
      /*Dica
      topo = pop(p2)
      concatena(p1,p2)
      push(p1,topo)    
      
      */
   }
}
