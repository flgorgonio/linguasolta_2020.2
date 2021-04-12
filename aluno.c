///////////////////////////////////////////////////////////////////////////////
///								Módulo Aluno
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aluno.h"
#include "util.h"

typedef struct aluno Aluno;

void moduloAluno(void) {
	char opcao;
	do {
		opcao = menuAluno();
		switch(opcao) {
			case '1': 	cadastrarAluno();
						break;
			case '2': 	pesquisarAluno();
						break;
			case '3': 	atualizarAluno();
						break;
			case '4': 	excluirAluno();
						break;
		} 		
	} while (opcao != '0');
}


void cadastrarAluno(void) {
  Aluno *aln;
	// função ainda em desenvolvimento
	
  // ler os dados do aluno com a função telaCadastrarAluno()
  aln = telaPreencherAluno();

  // gravar o registro no arquivo de alunos
  gravarAluno(aln);

  // liberar o espaço de memória da estrutura 
  free(aln);
}


void pesquisarAluno(void) {
  Aluno* aln;
  char* matr;
	// função ainda em desenvolvimento

	matr = telaPesquisarAluno();

  // pesquisa o aluno no arquivo
  aln = buscarAluno(matr);

  // exibe o aluno pesquisado
  exibirAluno(aln);

  free(aln); 
}


void atualizarAluno(void) {
  Aluno* aln;
  char* matr;
	// função ainda em desenvolvimento

	// exibe a tela apenas para testes
	matr = telaAtualizarAluno();

  // pesquisa o aluno no arquivo
  aln = buscarAluno(matr);

  if (aln == NULL) {
    printf("\n\nAluno não encontrado!\n\n");
  } else {
    regravarAluno(aln, matr);
  }


}


void excluirAluno(void) {
	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaExcluirAluno();
}


char menuAluno(void) {
	char op;
  
  limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =   Escola de Idiomas Língua Solta    = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @flgorgonio - Jan, 2021                  ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = =  Menu Aluno = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Cadastrar um novo aluno                                  ///\n");
	printf("///           2. Pesquisar os dados de um aluno                           ///\n");
	printf("///           3. Atualizar o cadastro de um aluno                         ///\n");
	printf("///           4. Excluir um aluno do sistema                              ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada: ");
	scanf("%c", &op);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
	return op;
}


Aluno* telaPreencherAluno(void) {
  Aluno *aln;

  limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =   Escola de Idiomas Língua Solta    = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @flgorgonio - Jan, 2021                  ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = Cadastrar Aluno = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
  
  aln = (Aluno*) malloc(sizeof(Aluno));
  do {
    printf("///           Matrícula (apenas números): ");
    scanf("%[^\n]", aln->matr);
    getchar();
  } while (!validarMatr(aln->matr));
	printf("///           Nome completo: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", aln->nome);
	getchar();
	printf("///           E-mail: ");
	scanf("%[a-z0-9@.]", aln->email);
	getchar();
	printf("///           Data de Nascimento (dd/mm/aaaa):  ");
	scanf("%[0-9/]", aln->nasc);
	getchar();
  do {
    printf("///           Celular  (apenas números com DDD): ");
    scanf("%[^\n]", aln->celular);
    getchar();
  } while (!validarFone(aln->celular));
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
  return aln;
}


char* telaPesquisarAluno(void) {
	char* matr;

  matr = (char*) malloc(12*sizeof(char));
  limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =   Escola de Idiomas Língua Solta    = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @flgorgonio - Jan, 2021                  ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = Pesquisar Aluno = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Informe a matrícula do aluno (apenas números): ");
	scanf("%[0-9]", matr);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
  return matr;
}


char* telaAtualizarAluno(void) {
	char* matr;

  matr = (char*) malloc(12*sizeof(char));
  limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =   Escola de Idiomas Língua Solta    = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @flgorgonio - Jan, 2021                  ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = Atualizar Aluno = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Informe a matrícula do aluno (apenas números): ");
	scanf("%[0-9]", matr);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
  return matr;
}


void telaExcluirAluno(void) {
	char matr[12];

  limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =   Escola de Idiomas Língua Solta    = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @flgorgonio - Jan, 2021                  ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =  Excluir Aluno  = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Informe a matrícula do aluno (apenas números): ");
	scanf("%[0-9]", matr);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
}


void gravarAluno(Aluno* aln) {
  FILE* fp;

  fp = fopen("alunos.dat", "ab");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  fwrite(aln, sizeof(Aluno), 1, fp);
  fclose(fp);
}


Aluno* buscarAluno(char* matr) {
  FILE* fp;
  Aluno* aln;

  aln = (Aluno*) malloc(sizeof(Aluno));
  fp = fopen("alunos.dat", "rb");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  while(!feof(fp)) {
    fread(aln, sizeof(Aluno), 1, fp);
    if (strcmp(aln->matr, matr) == 0) {
      fclose(fp);
      return aln;
    }
  }
  fclose(fp);
  return NULL;
}


void exibirAluno(Aluno* aln) {

  if (aln == NULL) {
    printf("\n= = = Aluno Inexistente = = =\n");
  } else {
    printf("\n= = = Aluno Cadastrado = = =\n");
    printf("Matrícula: %s\n", aln->matr);
    printf("Nome do aluno: %s\n", aln->nome);
    printf("Endereço eletrônico: %s\n", aln->email);
    printf("Data de Nasc: %s\n", aln->nasc);
    printf("Celular: %s\n", aln->celular);
  }
  printf("\n\nTecle ENTER para continuar!\n\n");
  getchar();
}


void regravarAluno(Aluno* al, char* matr) {

}