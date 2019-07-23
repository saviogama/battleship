#ifndef JOGADOR_H_
#define JOGADOR_H_

#include "Navio.h"
#include "Lista.h"

class Jogador {

private:
	//

public:
	//Esses atributos deveriam ser private pra ter encapsulamento, mas estou tendo problemas de compilacao em umas partes do codigo, entao deixei public mesmo por enquanto
	char tabuleiro[10][10]; //Tabuleiro do jogador
	int casas_restantes = 18; //Este e o numero das casas de todos os navios somados que faltam serem destruidos, logo assim que chegar a 0 o jogador ganhou o jogo
	Navio navio;
	string nome;

	Jogador(string nome, Navio navio);
	~Jogador();

	//Getters e Setters
	//string getNome() { return this->nome; }
	//void setCasasRestantes(int restantes) { this->casas_restantes = restantes; }
	//int getCasasRestantes() { return this->casas_restantes; }

};

bool realizarTiro(Jogador *atacante, Jogador *atacado, int linha, int coluna);
bool posicionarNavios(Jogador *jogador, int casas, int linha, int coluna, char c);
bool realizarTiroBot(Jogador *atacante, Jogador *atacado, int linha, int coluna, cabeca *l, cabeca *c);
void exibirTabuleiro(Jogador *jogador, Jogador *bot);

#endif
