///////////////////////////////////////////////////////////////////////////////
///								Módulo Aluno
///////////////////////////////////////////////////////////////////////////////

typedef struct aluno Aluno;

struct aluno {
  char matr[12];
  char nome[51];
  char email[51];
  char nasc[11];
  char celular[12];
};

void moduloAluno(void);
char menuAluno(void);
Aluno* telaPreencherAluno(void);
char* telaPesquisarAluno(void);
char* telaAtualizarAluno(void);
void telaExcluirAluno(void);
void cadastrarAluno(void);
void pesquisarAluno(void);
void atualizarAluno(void);
void excluirAluno(void);
void gravarAluno(Aluno*);
void exibirAluno(Aluno*);
Aluno* buscarAluno(char*);
void exibirAluno(Aluno*);
void regravarAluno(Aluno*, char*);

///
/// Funções de validação - serão transferidas posteriormente para o módulo util.c
///

int validaNome(char []);
int validaMatr(char []);
int validaEmail(char []);
int validaData(char []);
int validaCelular(char []);