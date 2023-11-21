///////////////////////////////////////////////////////////////////////////////
///								Módulo Relatório
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "relatorio.h"
#include "util.h"
#include "turma.h"
#include "professor.h"

void moduloRelatorio(void) {
	char opcao;
	do {
		opcao = menuRelatorio();
		switch(opcao) {
			case '1': 	alunosPorTurma();
						break;
			case '2': 	turmasPorProfessor();
						break;
			case '3': 	turmasPorSemestre();
						break;
			case '4': 	turmasPorHorario();
						break;
		} 		
	} while (opcao != '0');
}


void alunosPorTurma(void) {

	// função ainda em desenvolvimento
	// exibe a tela apenas para testes

    char* codTurma;

	codTurma = telaAlunosPorTurma();
    relatAlunosPorTurma(codTurma);
    free(codTurma);
}


void turmasPorProfessor(void) {
    
	// função ainda em desenvolvimento
	// exibe a tela apenas para testes

    char* cpfProf;

	cpfProf = telaTurmasPorProfessor();
    relatTurmasPorProfessor(cpfProf);
    free(cpfProf);
}


void turmasPorSemestre(void) {

	// função ainda em desenvolvimento
	// exibe a tela apenas para testes

    char* semestre;

	semestre = telaTurmasPorSemestre();
    relatTurmasPorSemestre(semestre);
    free(semestre);
}


void turmasPorHorario(void) {

	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	
    char* horario;

    horario = telaTurmasPorHorario();
    relatTurmasPorHorario(horario);
    free(horario);
}


char menuRelatorio(void) {
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
	printf("///           = = = = = = = =  Menu Relatório = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Listar alunos de uma determinada turma                   ///\n");
	printf("///           2. Exibir turmas de um professor                            ///\n");
	printf("///           3. Listar todas as turmas em um determinado semestre        ///\n");
	printf("///           4. Exibir turmas ofertadas em um dado horário               ///\n");
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


char* telaAlunosPorTurma(void) {
    char* codTurma;

    codTurma = (char*) malloc(4*sizeof(char));
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
	printf("///           = = = = = = =  Alunos por Turma   = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Informe o código da turma (Ex. T01, T02): ");
	scanf("%[A-Za-z0-9]", codTurma);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
    return codTurma;
}


char* telaTurmasPorProfessor(void) {
	char *cpf;

    cpf = (char*) malloc(12*sizeof(char));

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
	printf("///           = = = = = =  Turmas por Professor   = = = = = =             ///\n");
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
    return cpf;
}


char* telaTurmasPorSemestre(void) {
	char* semestre;

    semestre = (char*) malloc(7*sizeof(char));

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
	printf("///           = = = = = =   Turmas por Semestre   = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Informe o semestre desejado (Ex. 2020.1): ");
	scanf("%[0-9.]", semestre);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
    return semestre;
}


char* telaTurmasPorHorario(void) {
	char* horario;

    horario = (char*) malloc(11*sizeof(char));

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
	printf("///           = = = = = =   Turmas por Horário    = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Informe o horário desejado (Ex. 35M12): ");
	scanf("%[A-Za-z0-9]", horario);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
    return horario;
}


void relatAlunosPorTurma(char* codTurma) {
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
	printf("///           = = = = = = =  Código da Turma: %-3s  = = = = =             ///\n", codTurma);
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
    printf("///           ===============================================             ///\n");
	printf("///           ||  Matrícula  ||        Nome do Aluno       ||             ///\n");
    printf("///           ===============================================             ///\n");
    printf("///           || 12345678901 || Astrogildo de Araújo Alves ||             ///\n");
    printf("///           || 23456789012 || Benoclécio Barbosa Bastos  ||             ///\n");
    printf("///           || 34567890123 || Clecionilda Cardoso Castro ||             ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("///           Tecle <ENTER> para continuar...                             ///");
    getchar();
}


void relatTurmasPorProfessor(char* cpfProf) {
    char* nomeProf;

    nomeProf = getNomeProfessor(cpfProf);

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
	printf("///           = = = = =  Professor: %12s \n", nomeProf);
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
    printf("///           ===============================================             ///\n");
	printf("///           ||  Cod Turma  ||        Nome da Turma       ||             ///\n");
    printf("///           ===============================================             ///\n");
    printf("///           ||     T09     || Francês Instrumental I     ||             ///\n");
    printf("///           ||     T16     || Inglês para Negócios  II   ||             ///\n");
    printf("///           ||     T42     || Inglês para Negócios III   ||             ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("///           Tecle <ENTER> para continuar...                             ///");
    getchar();
    free(nomeProf);
}


void relatTurmasPorSemestre(char* semestre) {
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
	printf("///           = = = = = = =  Semestre: %7s  = = = = = = =             ///\n", semestre);
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
    printf("///           ===============================================             ///\n");
	printf("///           ||  Cod Turma  ||        Nome da Turma       ||             ///\n");
    printf("///           ===============================================             ///\n");
    listaTurmasPorSemestre(semestre);
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("///           Tecle <ENTER> para continuar...                             ///");
    getchar();
}


void listaTurmasPorSemestre(char* semestre) {
    FILE* fp;
    Turma* trm;
    char nomeTrunc[26];
    int tam;

    trm = (Turma*) malloc(sizeof(Turma));
    fp = fopen("turma.dat", "rb");
    while (fread(trm, sizeof(Turma), 1, fp)) {
        if (strcmp(trm->semestre, semestre) == 0) {
            tam = strlen(trm->nomeTurma);
            strncpy(nomeTrunc, trm->nomeTurma, tam);
            for (int i = tam; i < 25; i++) {
                nomeTrunc[i] = ' ';
            }
            nomeTrunc[25] = '\0';
            printf("///           ||     %-3s     || %-26s ||             ///\n", trm->codTurma, nomeTrunc);
        }
    }
    fclose(fp);
    free(trm);
}


void relatTurmasPorHorario(char* horario) {
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
	printf("///           = = = = = = =  Horário: %11s  = = = = =             ///\n", horario);
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
    printf("///           ===============================================             ///\n");
	printf("///           ||  Cod Turma  ||        Nome da Turma       ||             ///\n");
    printf("///           ===============================================             ///\n");
    listaTurmasPorHorario(horario);
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("///           Tecle <ENTER> para continuar...                             ///");
    getchar();
}


void listaTurmasPorHorario(char* horario) {
    FILE* fp;
    Turma* trm;
    char nomeTrunc[26];
    int tam;

    trm = (Turma*) malloc(sizeof(Turma));
    fp = fopen("turma.dat", "rb");
    while (fread(trm, sizeof(Turma), 1, fp)) {
        if (strcmp(trm->horario, horario) == 0) {
            tam = strlen(trm->nomeTurma);
            strncpy(nomeTrunc, trm->nomeTurma, tam);
            for (int i = tam; i < 25; i++) {
                nomeTrunc[i] = ' ';
            }
            nomeTrunc[25] = '\0';
            printf("///           ||     %-3s     || %-26s ||             ///\n", trm->codTurma, nomeTrunc);
        }
    }
    fclose(fp);
    free(trm);
}


char* getNomeProfessor(char* cpfProf) {
	char *nomeProf;
	Professor* prf;
	
	nomeProf = (char*) malloc(51*sizeof(char));
	prf = (Professor*) malloc(sizeof(Professor));
	prf = buscarProfessor(cpfProf);
    if (prf == NULL) {
    	strcpy(nomeProf, "");
    } else {
    	strcpy(nomeProf, prf->nome);
    }
    
	return nomeProf;
}






























