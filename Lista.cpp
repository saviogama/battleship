#include "Lista.h"

void inicializar(cabeca *l) {
	l->inicio = NULL;
}

void adicionarInicio(cabeca *l, int n) {
	lista *novo;
	novo = (lista *)malloc(sizeof(lista));
	novo->prox = l->inicio;
	novo->posicao = n;
	l->inicio = novo;
}

void removerInicio(cabeca *l) {
	lista *aux;
	aux = l->inicio->prox;
	l->inicio = aux;
}

void limpar(cabeca *l){
	lista *aux;
	while(l->inicio != NULL){
		aux = l->inicio->prox;
		l->inicio = aux;
	}
}

int prioridade(cabeca *l) {
	return l->inicio->posicao;
}

/*
void percorrer(cabeca *l) {
	lista *temp;
	temp = l->inicio;
	while (temp != NULL) {
		std::cout << temp->posicao;
		cout << "\n";
		temp = temp->prox;
	}
}
*/
