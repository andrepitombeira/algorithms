// TAD: Vetor Funcionario

#include "func.h"

//tipo exportado
typedef struct conjfuncionario Conjfuncionario;

//Funções exportadas

//Função cria conjunto funcionario
//Funçãonque cria um conjunto de funcionarios
Conjfuncionario* getConj();
   
// Função Inicializa Vetor
// Função que recebe um vetor como parametro e o inicializa-o com NULL
void ini_Func(Conjfuncionario* cf);

// Função adiciona Funcionario
// Função que adiciona um funcionario no vetor
void add_Func(Conjfuncionario* cf);

//Função Busca Funcionario
// Função que recebe como parametro o cpf e busca por meio deste um determinado funcionario
Funcionario* busca_Func(int cpf, Conjfuncionario* cf);

//Função exibi Funcionario
//Função que exibi os dados de um funcionario apartir do cpf
void exibi_Func(int cpf, Conjfuncionario* cf);

//Função Exibi lista de Funcionarios
//Função que imprime os dados de todos os funcionarios do vetor
void imprime_Func(Conjfuncionario* cf);

//Função Exclui funcionario
//Função que exclui um funcionario apartir do cpf
void exclui_Func(int cpf, Conjfuncionario* cf);

//Função Ordena
//Função que ordena o vetor de funcionarios pelo campo cpf
void ordena_Func(Conjfuncionario* cf);

//Função Estatística
//Função que exibe as estatísticas do vetor de funcionarios
void estatistica_Func(Conjfuncionario* cf);

//Função Média Salário Base
//Função que retorna a média dos salários bases dos funcionários
void media_FuncSalBase(Conjfuncionario* cf);

//Função Média Gratificação
//Função que retorna a média da gratificação dos funcionários
void media_FuncSalGra(Conjfuncionario* cf);

//Função Média Salário
//Função que retorna a média dos salários dos funcionários
void media_FuncSal(Conjfuncionario* cf);

//Função maior Salário base
//Função que retorna o maior salário base dos funcionários
void maior_FuncSalBase(Conjfuncionario* cf);

//Função maior Gratificação
//Função que retorna a maior gratificação dos funcionários
void maior_FuncSalGra(Conjfuncionario* cf);

//Função maior Salário
//Função que retorna o maior salario dos funcionários
void maior_FuncSal(Conjfuncionario* cf);

//Função atualiza conjunto funcionario
//Função que atualiza um funcionario de um conjunto de funcionario
void atualizaConj(int cpf, Conjfuncionario* cf);

//Função retorna indice
//Função que retorna o indice de um funcionario
int busca_indice_Func(int cpf, Conjfuncionario* cf);