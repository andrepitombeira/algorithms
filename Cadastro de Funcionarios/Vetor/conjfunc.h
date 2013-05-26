// TAD: Vetor Funcionario

#include "func.h"

//tipo exportado
typedef struct conjfuncionario Conjfuncionario;

//Fun��es exportadas

//Fun��o cria conjunto funcionario
//Fun��onque cria um conjunto de funcionarios
Conjfuncionario* getConj();
   
// Fun��o Inicializa Vetor
// Fun��o que recebe um vetor como parametro e o inicializa-o com NULL
void ini_Func(Conjfuncionario* cf);

// Fun��o adiciona Funcionario
// Fun��o que adiciona um funcionario no vetor
void add_Func(Conjfuncionario* cf);

//Fun��o Busca Funcionario
// Fun��o que recebe como parametro o cpf e busca por meio deste um determinado funcionario
Funcionario* busca_Func(int cpf, Conjfuncionario* cf);

//Fun��o exibi Funcionario
//Fun��o que exibi os dados de um funcionario apartir do cpf
void exibi_Func(int cpf, Conjfuncionario* cf);

//Fun��o Exibi lista de Funcionarios
//Fun��o que imprime os dados de todos os funcionarios do vetor
void imprime_Func(Conjfuncionario* cf);

//Fun��o Exclui funcionario
//Fun��o que exclui um funcionario apartir do cpf
void exclui_Func(int cpf, Conjfuncionario* cf);

//Fun��o Ordena
//Fun��o que ordena o vetor de funcionarios pelo campo cpf
void ordena_Func(Conjfuncionario* cf);

//Fun��o Estat�stica
//Fun��o que exibe as estat�sticas do vetor de funcionarios
void estatistica_Func(Conjfuncionario* cf);

//Fun��o M�dia Sal�rio Base
//Fun��o que retorna a m�dia dos sal�rios bases dos funcion�rios
void media_FuncSalBase(Conjfuncionario* cf);

//Fun��o M�dia Gratifica��o
//Fun��o que retorna a m�dia da gratifica��o dos funcion�rios
void media_FuncSalGra(Conjfuncionario* cf);

//Fun��o M�dia Sal�rio
//Fun��o que retorna a m�dia dos sal�rios dos funcion�rios
void media_FuncSal(Conjfuncionario* cf);

//Fun��o maior Sal�rio base
//Fun��o que retorna o maior sal�rio base dos funcion�rios
void maior_FuncSalBase(Conjfuncionario* cf);

//Fun��o maior Gratifica��o
//Fun��o que retorna a maior gratifica��o dos funcion�rios
void maior_FuncSalGra(Conjfuncionario* cf);

//Fun��o maior Sal�rio
//Fun��o que retorna o maior salario dos funcion�rios
void maior_FuncSal(Conjfuncionario* cf);

//Fun��o atualiza conjunto funcionario
//Fun��o que atualiza um funcionario de um conjunto de funcionario
void atualizaConj(int cpf, Conjfuncionario* cf);

//Fun��o retorna indice
//Fun��o que retorna o indice de um funcionario
int busca_indice_Func(int cpf, Conjfuncionario* cf);