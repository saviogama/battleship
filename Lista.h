#ifndef LISTA_H_
#define LISTA_H_

#include "Navio.h"

typedef struct lista {

	int posicao;
	struct lista *prox;

}lista;

typedef struct cabeca {

	lista *inicio;

}cabeca;

void inicializar(cabeca *l);
void adicionarInicio(cabeca *l, int n);
void removerInicio(cabeca *l);
void limpar(cabeca *l);
int prioridade(cabeca *l);
//void percorrer(cabeca *l);

#endif

