///////////////////////////////////////////////////////////////////////////////
///								Módulo Utilitário
///////////////////////////////////////////////////////////////////////////////

#include <time.h>
#include <stdlib.h>

void delay(int segundos) {
  int tempo = 1000 * segundos;
  clock_t inicio = clock();
  while (clock() < inicio + tempo) {
    // não faz nada, apenas gasta tempo
  }
}


void limpaTela(void) {
  if (system("clear") || system("cls")) {

  }
}


int ehDigito(char c) {
  if (c >= '0' && c <= '9') {
    return 1;
  } else {
    return 0;
  }
}

