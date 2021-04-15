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

	aln = telaPreencherAluno();
	gravarAluno(aln);
	free(aln);
}


void pesquisarAluno(void) {
	Aluno* aln;
	char* matr;

	matr = telaPesquisarAluno();
	aln = buscarAluno(matr);
	exibirAluno(aln);
	free(aln); 
	free(matr);
}


void atualizarAluno(void) {
	Aluno* aln;
	char* matr;

	matr = telaAtualizarAluno();
	aln = buscarAluno(matr);
	if (aln == NULL) {
    	printf("\n\nAluno não encontrado!\n\n");
  	} else {
		  aln = telaPreencherAluno();
		  strcpy(aln->matr, matr);
		  regravarAluno(aln);
		  // Outra opção:
		  // excluirAluno(matr);
		  // gravarAluno(aln);
		  free(aln);
	}
	free(matr);
}


void excluirAluno(void) {
	Aluno* aln;
	char *matr;

	matr = telaExcluirAluno();
	aln = (Aluno*) malloc(sizeof(Aluno));
	aln = buscarAluno(matr);
	if (aln == NULL) {
    	printf("\n\nAluno não encontrado!\n\n");
  	} else {
		  aln->status = False;
		  regravarAluno(aln);
		  free(aln);
	}
	free(matr);
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

void telaErroArquivo(void) {
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
	printf("///           = = = = = = =  Ops! Ocorreu em erro = = = = = =             ///\n");
	printf("///           = = =  Não foi possível acessar o arquivo = = =             ///\n");
	printf("///           = = = = com informações sobre os alunos = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = =  Pedimos desculpas pelos inconvenientes = =             ///\n");
	printf("///           = = =  mas este programa será finalizado! = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("\n\nTecle ENTER para continuar!\n\n");
	getchar();
	exit(1);
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
	aln->status = True;
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


char* telaExcluirAluno(void) {
	char *matr;

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
	return matr;
}


void gravarAluno(Aluno* aln) {
	FILE* fp;

	fp = fopen("alunos.dat", "ab");
	if (fp == NULL) {
		telaErroArquivo();
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
		telaErroArquivo();
	}
	while(fread(aln, sizeof(Aluno), 1, fp)) {
		if ((strcmp(aln->matr, matr) == 0) && (aln->status == True)) {
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
		printf("Status: %d\n", aln->status);
	}
	printf("\n\nTecle ENTER para continuar!\n\n");
	getchar();
}


void regravarAluno(Aluno* aln) {
	int achou;
	FILE* fp;
	Aluno* alnLido;

	alnLido = (Aluno*) malloc(sizeof(Aluno));
	fp = fopen("alunos.dat", "r+b");
	if (fp == NULL) {
		telaErroArquivo();
	}
	// while(!feof(fp)) {
	achou = False;
	while(fread(alnLido, sizeof(Aluno), 1, fp) && !achou) {
		//fread(alnLido, sizeof(Aluno), 1, fp);
		if (strcmp(alnLido->matr, aln->matr) == 0) {
			achou = True;
			fseek(fp, -1*sizeof(Aluno), SEEK_CUR);
        	fwrite(aln, sizeof(Aluno), 1, fp);
			//break;
		}
	}
	fclose(fp);
	free(alnLido);
}
