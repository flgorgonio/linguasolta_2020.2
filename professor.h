///////////////////////////////////////////////////////////////////////////////
///								Módulo Professor
///////////////////////////////////////////////////////////////////////////////

typedef struct professor Professor;

struct professor {
    char cpf[12];
    char nome[51];
    char email[51];
    char nasc[11];
    char celular[12];
    int status;
};

void moduloProfessor(void);
char menuProfessor(void);

void telaCadastrarProfessor(void);
void telaPesquisarProfessor(void);
void telaAtualizarProfessor(void);
void telaExcluirProfessor(void);

void cadastrarProfessor(void);
void pesquisarProfessor(void);
void atualizarProfessor(void);
void excluirProfessor(void);
