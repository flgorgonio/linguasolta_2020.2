///////////////////////////////////////////////////////////////////////////////
///								Módulo Turma
///////////////////////////////////////////////////////////////////////////////

typedef struct turma Turma;

struct turma {
    char codTurma[4];
	char nomeTurma[51];
	char horario[11];
	char cpfProf[12];
	char semestre[7];
	char sala[11];
    int status;
};

void moduloTurma(void);
char menuTurma(void);

void telaCadastrarTurma(void);
void telaPesquisarTurma(void);
void telaAtualizarTurma(void);
void telaExcluirTurma(void);

void cadastrarTurma(void);
void pesquisarTurma(void);
void atualizarTurma(void);
void excluirTurma(void);