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
  int status;
};

void moduloAluno(void);
char menuAluno(void);

Aluno* telaCadastrarAluno(void);
char* telaPesquisarAluno(void);
char* telaAtualizarAluno(void);
char* telaExcluirAluno(void);
void telaErroArquivo(void);

void cadastrarAluno(void);
void pesquisarAluno(void);
void atualizarAluno(void);
void excluirAluno(void);
void gravarAluno(Aluno*);
void exibirAluno(Aluno*);

Aluno* buscarAluno(char*);
void exibirAluno(Aluno*);
void regravarAluno(Aluno*);
