// TAD: Funcionario 

/* Tipo Exportado */

typedef struct salario Salario;
typedef struct funcionario Funcionario;

   
/* Fun��es exportadas */

/* Fun��o Retorna Funcionario */
/* Fun��o que retorna um funcionario com os dados fornecidos via teclado */
Funcionario* getFuncionario();

/* Fun��o Exibi dados Funcionarios*/
/* Fun��o que exibi os dados de um Funcinario */
void exibe_func(Funcionario *f);


/* Fun��o Atualiza Funcionario */
/* Fun��o que atualiza os dados de um funcionario */
void atualiza_func(Funcionario *f);

/* Fun��o Libera Mem�ria */
/* Fun��o que libera da memoria o espa�o alocado para um funcion�rio */
void libera_func(Funcionario *f);

//Fun��o funcionario cpf
//Fun��o que retorna o cpf de um funcionario
int getCpf(Funcionario *f);

//Fun��o funcionario Salario base
//Fun��o que retorna o salario base de um funcionario
float getSalBase(Funcionario *f);

//Fun��o funcionario Gratifica��o
//Fun��o que retorna a gratifica��o de um funcionario
float getSalGra(Funcionario *f);

//Fun��o funcionario Salario
//Fun��o que retorna o salario de um funcionario
float getSal(Funcionario *f);

//Fun��o verifica null
//Fun��o que verifica se um funcionario � null
int verifica_null(Funcionario *f);


