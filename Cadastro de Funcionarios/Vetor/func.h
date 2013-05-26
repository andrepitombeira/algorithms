// TAD: Funcionario 

/* Tipo Exportado */

typedef struct salario Salario;
typedef struct funcionario Funcionario;

   
/* Funções exportadas */

/* Função Retorna Funcionario */
/* Função que retorna um funcionario com os dados fornecidos via teclado */
Funcionario* getFuncionario();

/* Função Exibi dados Funcionarios*/
/* Função que exibi os dados de um Funcinario */
void exibe_func(Funcionario *f);


/* Função Atualiza Funcionario */
/* Função que atualiza os dados de um funcionario */
void atualiza_func(Funcionario *f);

/* Função Libera Memória */
/* Função que libera da memoria o espaço alocado para um funcionário */
void libera_func(Funcionario *f);

//Função funcionario cpf
//Função que retorna o cpf de um funcionario
int getCpf(Funcionario *f);

//Função funcionario Salario base
//Função que retorna o salario base de um funcionario
float getSalBase(Funcionario *f);

//Função funcionario Gratificação
//Função que retorna a gratificação de um funcionario
float getSalGra(Funcionario *f);

//Função funcionario Salario
//Função que retorna o salario de um funcionario
float getSal(Funcionario *f);

//Função verifica null
//Função que verifica se um funcionario é null
int verifica_null(Funcionario *f);


