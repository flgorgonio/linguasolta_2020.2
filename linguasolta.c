///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///                  Projeto Sistema de Gestão Escolar                      ///
///                Developed by  @flgorgonio - Jan, 2021                    ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/////////////////////////////////////////////////////////////////////////////// 
/// 						Assinaturas das funções
///////////////////////////////////////////////////////////////////////////////

char menuPrincipal(void);
void moduloInformacoes(void);
void telaSobre(void);

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

void moduloRelatorio(void);
void delay(int);


///////////////////////////////////////////////////////////////////////////////
///								Programa Principal
///////////////////////////////////////////////////////////////////////////////

int main(void) {
	char opcao;
	do {
		opcao = menuPrincipal();
		switch(opcao) {
			case '1': 	moduloAluno();
						break;
			case '2': 	moduloProfessor();
						break;
			case '3': 	moduloTurma();
						break;
			case '4': 	moduloRelatorio();
						break;
			case '5': 	moduloInformacoes();
						break;
		} 		
	} while (opcao != '0');
	return 0;    
}


char menuPrincipal(void) {
	char op;
    system("clear");
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
	printf("///           = = = = = = = =  Menu Principal = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Módulo aluno                                             ///\n");
	printf("///           2. Módulo professor                                         ///\n");
	printf("///           3. Módulo turma                                             ///\n");
	printf("///           4. Módulo relatórios                                        ///\n");
	printf("///           5. Informações sobre o sistema                              ///\n");
	printf("///           0. Encerra o programa                                       ///\n");
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


void telaSobre(void) {
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///              Universidade Federal do Rio Grande do Norte              ///\n");
	printf("///                  Centro de Ensino Superior do Seridó                  ///\n");
	printf("///                Departamento de Computação e Tecnologia                ///\n");
	printf("///                   Disciplina DCT1106 -- Programação                   ///\n");
	printf("///                   Projeto Sistema de Gestão Escolar                   ///\n");
	printf("///                 Developed by  @flgorgonio - Jan, 2021                 ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Escola de Idiomas Língua Solta   = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                                                                       ///\n");
	printf("/// Programa exemplo utilizado na disciplina DCT1106 - Programação, para  ///\n");
	printf("/// fins didáticos de orientação. O programa contém os principais módulos ///\n");
	printf("/// e funcionalidades que serão exigidos na avaliação dos projetos a      ///\n");
	printf("/// serem desenvolvidos pelos alunos ao longo da disciplina. Serve como   ///\n");
	printf("/// um guia de consulta e referência para o desenvolvimento dos demais    ///\n");
 	printf("/// projetos. Todos os dados e informações utilizados neste projeto são   ///\n");
 	printf("/// fictícios.                                                            ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void delay(int segundos) {
  int tempo = 500000 * segundos;
  clock_t inicio = clock();
  while (clock() < inicio + tempo) {
    // não faz nada, apenas gasta tempo
  }
}


///////////////////////////////////////////////////////////////////////////////
///								Módulo Aluno
///////////////////////////////////////////////////////////////////////////////

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
	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaCadastrarAluno();
}


void pesquisarAluno(void) {
	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaPesquisarAluno();
}


void atualizarAluno(void) {
	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaAtualizarAluno();
}


void excluirAluno(void) {
	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaExcluirAluno();
}


char menuAluno(void) {
	char op;
    system("clear");
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


void telaCadastrarAluno(void) {
	char matr[12];
	char nome[51];
	char email[51];
	char nasc[11];
	char celular[12];

    system("clear");
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
	printf("///           Matrícula (apenas números): ");
	scanf("%[0-9]", matr);
	getchar();
	printf("///           Nome completo: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
	getchar();
	printf("///           E-mail: ");
	scanf("%[a-z@.]", email);
	getchar();
	printf("///           Data de Nascimento (dd/mm/aaaa):  ");
	scanf("%[0-9/]", nasc);
	getchar();
	printf("///           Celular  (apenas números): ");
	scanf("%[0-9]", celular);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
}


void telaPesquisarAluno(void) {
	char matr[12];

    system("clear");
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
}


void telaAtualizarAluno(void) {
	char matr[12];

    system("clear");
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
}


void telaExcluirAluno(void) {
	char matr[12];

    system("clear");
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


///////////////////////////////////////////////////////////////////////////////
///								Módulo Professor
///////////////////////////////////////////////////////////////////////////////

void moduloProfessor(void) {
	char opcao;
	do {
		opcao = menuProfessor();
		switch(opcao) {
			case '1': 	cadastrarProfessor();
						break;
			case '2': 	pesquisarProfessor();
						break;
			case '3': 	atualizarProfessor();
						break;
			case '4': 	excluirProfessor();
						break;
		} 		
	} while (opcao != '0');
}


void cadastrarProfessor(void) {
	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaCadastrarProfessor();
}


void pesquisarProfessor(void) {
	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaPesquisarProfessor();
}


void atualizarProfessor(void) {
	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaAtualizarProfessor();
}


void excluirProfessor(void) {
	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaExcluirProfessor();
}


char menuProfessor(void) {
	char op;
    system("clear");
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
	printf("///           = = = = = = = =  Menu Professor = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Cadastrar um novo professor                              ///\n");
	printf("///           2. Pesquisar os dados de um professor                       ///\n");
	printf("///           3. Atualizar o cadastro de um professor                     ///\n");
	printf("///           4. Excluir um professor do sistema                          ///\n");
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


void telaCadastrarProfessor(void) {
	char cpf[12];
	char nome[51];
	char email[51];
	char nasc[11];
	char celular[12];

    system("clear");
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
	printf("///           = = = = = = = Cadastrar Professor = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           CPF (apenas números): ");
	scanf("%[0-9]", cpf);
	getchar();
	printf("///           Nome completo: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
	getchar();
	printf("///           E-mail: ");
	scanf("%[a-z@.]", email);
	getchar();
	printf("///           Data de Nascimento (dd/mm/aaaa):  ");
	scanf("%[0-9/]", nasc);
	getchar();
	printf("///           Celular  (apenas números): ");
	scanf("%[0-9]", celular);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
}


void telaPesquisarProfessor(void) {
	char cpf[12];

    system("clear");
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
	printf("///           = = = = = = = Pesquisar Professor = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Informe o CPF do professor (apenas números): ");
	scanf("%[0-9]", cpf);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
}


void telaAtualizarProfessor(void) {
	char cpf[12];

    system("clear");
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
	printf("///           = = = = = = = Atualizar Professor = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Informe o CPF do professor (apenas números): ");
	scanf("%[0-9]", cpf);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
}


void telaExcluirProfessor(void) {
	char cpf[12];

    system("clear");
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
	printf("///           = = = = = = =  Excluir Professor  = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Informe o CPF do professor (apenas números): ");
	scanf("%[0-9]", cpf);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
}


///////////////////////////////////////////////////////////////////////////////
///								Módulo Turma
///////////////////////////////////////////////////////////////////////////////

void moduloTurma(void) {
	char opcao;
	do {
		opcao = menuTurma();
		switch(opcao) {
			case '1': 	cadastrarTurma();
						break;
			case '2': 	pesquisarTurma();
						break;
			case '3': 	atualizarTurma();
						break;
			case '4': 	excluirTurma();
						break;
		} 		
	} while (opcao != '0');
}


void cadastrarTurma(void) {
	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaCadastrarTurma();
}


void pesquisarTurma(void) {
	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaPesquisarTurma();
}


void atualizarTurma(void) {
	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaAtualizarTurma();
}


void excluirTurma(void) {
	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaExcluirTurma();
}


char menuTurma(void) {
	char op;

    system("clear");
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
	printf("///           = = = = = = = = =  Menu Turma = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Cadastrar uma nova turma                                 ///\n");
	printf("///           2. Pesquisar os dados de uma turma                          ///\n");
	printf("///           3. Atualizar o cadastro de uma turma                        ///\n");
	printf("///           4. Excluir uma turma do sistema                             ///\n");
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


void telaCadastrarTurma(void) {
	char codTurma[4];
	char nomeTurma[51];
	char horario[11];
	char cpfProf[12];
	char semestre[7];
	char sala[11];

    system("clear");
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
	printf("///           = = = = = = = = Cadastrar Turma = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Nome da turma (Ex. Francês Básico 1): ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ0-9]", nomeTurma);
	getchar();
	printf("///           Código da turma (Ex. T01, T02): ");
	scanf("%[A-Za-z0-9]", codTurma);
	getchar();
	printf("///           Semestre (Ex. 2020.1): ");
	scanf("%[0-9.]", semestre);
	getchar();
	printf("///           Horário (Ex. 35M12): ");
	scanf("%[A-Za-z0-9]", horario);
	getchar();
	printf("///           CPF do professor (apenas números):  ");
	scanf("%[0-9]", cpfProf);
	getchar();
	printf("///           Local das aulas (Ex. Sala F1): ");
	scanf("%[A-Za-z 0-9]", sala);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
}


void telaPesquisarTurma(void) {
	char idioma[4];
	char modulo[4];
	char nivel;
	char semestre[7];
	char turma[4];

    system("clear");
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
	printf("///           = = = = = = = = Pesquisar Turma = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Idioma (Ex. ING, FRA, ITA): ");
	scanf("%[A-Za-z]", idioma);
	getchar();
	printf("///           Módulo (Ex. BAS, INT, AVA): ");
	scanf("%[A-Za-z]", modulo);
	getchar();
	printf("///           Nível (Ex. 1, 2, 3): ");
	scanf("%c", &nivel);
	getchar();
	printf("///           Semestre (Ex. 2020.1): ");
	scanf("%[0-9.]", semestre);
	getchar();
	printf("///           Turma (Ex. T01, T02): ");
	scanf("%[A-Za-z0-9]", turma);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
}


void telaAtualizarTurma(void) {
	char idioma[4];
	char modulo[4];
	char nivel;
	char semestre[7];
	char turma[4];

    system("clear");
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
	printf("///           = = = = = = = = Atualizar Turma = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Idioma (Ex. ING, FRA, ITA): ");
	scanf("%[A-Za-z]", idioma);
	getchar();
	printf("///           Módulo (Ex. BAS, INT, AVA): ");
	scanf("%[A-Za-z]", modulo);
	getchar();
	printf("///           Nível (Ex. 1, 2, 3): ");
	scanf("%c", &nivel);
	getchar();
	printf("///           Semestre (Ex. 2020.1): ");
	scanf("%[0-9.]", semestre);
	getchar();
	printf("///           Turma (Ex. T01, T02): ");
	scanf("%[A-Za-z0-9]", turma);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
}


void telaExcluirTurma(void) {
	char idioma[4];
	char modulo[4];
	char nivel;
	char semestre[7];
	char turma[4];

    system("clear");
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
	printf("///           = = = = = = = =  Excluir Turma  = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Idioma (Ex. ING, FRA, ITA): ");
	scanf("%[A-Za-z]", idioma);
	getchar();
	printf("///           Módulo (Ex. BAS, INT, AVA): ");
	scanf("%[A-Za-z]", modulo);
	getchar();
	printf("///           Nível (Ex. 1, 2, 3): ");
	scanf("%c", &nivel);
	getchar();
	printf("///           Semestre (Ex. 2020.1): ");
	scanf("%[0-9.]", semestre);
	getchar();
	printf("///           Turma (Ex. T01, T02): ");
	scanf("%[A-Za-z0-9]", turma);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
}


void moduloRelatorio(void) {
	// modulo em desenvolvimento

}


void moduloInformacoes(void) {
	// modulo em desenvolvimento
	telaSobre();

}

