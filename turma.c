///////////////////////////////////////////////////////////////////////////////
///								Módulo Turma
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include "turma.h"
#include "util.h"

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

