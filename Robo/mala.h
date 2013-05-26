//TAD MALA

typedef struct mala Mala;

//Cria uma nova Mala
Mala* getmala();

//Cadastra uma Mala
Mala* cadastra_mala();

//retorna o peso de uma mala
float getpeso(Mala* m);

//imprime mala
void imprime_mala(Mala* m);

//Libera Mala
void libera_mala(Mala* m);
