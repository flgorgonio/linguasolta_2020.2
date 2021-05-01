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
#include "aluno.h"
#include "professor.h"
#include "turma.h"
#include "util.h"
#include "relatorio.h"

/////////////////////////////////////////////////////////////////////////////// 
/// 						Assinaturas das funções
///////////////////////////////////////////////////////////////////////////////

char menuPrincipal(void);
void moduloInformacoes(void);
void telaSobre(void);


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
    //limpaTela();
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
    limpaTela();
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


void moduloInformacoes(void) {
	// modulo em desenvolvimento
	telaSobre();

}

