///////////////////////////////////////////////////////////////////////////////
///								Módulo Aluno
///////////////////////////////////////////////////////////////////////////////

void moduloAluno(void);
char menuAluno(void);
void telaCadastrarAluno(void);
void telaPesquisarAluno(void);
void telaAtualizarAluno(void);
void telaExcluirAluno(void);
void cadastrarAluno(void);
void pesquisarAluno(void);
void atualizarAluno(void);
void excluirAluno(void);

///
/// Funções de validação - serão transferidas posteriormente para o módulo util.c
///

int validaNome(char []);
int validaMatr(char []);
int validaEmail(char []);
int validaData(char []);
int validaCelular(char []);