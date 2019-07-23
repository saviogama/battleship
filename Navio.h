#ifndef NAVIO_H_
#define NAVIO_H_

#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <exception>
#include <string>

using namespace std;

class Navio {

private:
	//

public:
	//Esses atributos deveriam ser private pra ter encapsulamento, mas estou tendo problemas de compilacao em umas partes do codigo, entao deixei public mesmo por enquanto
	//Aqui estao a vida dos navios do player, sempre que se acerta uma casa, este numero e decrementado
	int vida_porta_avioes = 5;
	int vida_guerra1 = 4;
	int vida_guerra2 = 4;
	int vida_encouracado = 3;
	int vida_submarino = 2;

	~Navio();

	//Getters e Setters
	/*
	void setVida_porta_avioes(int vida) { this->vida_porta_avioes = vida; }
	int getVida_porta_avioes() { return this->vida_porta_avioes; }

	void setVida_guerra1(int vida) { this->vida_guerra1 = vida; }
	int getVida_guerra1() { return this->vida_guerra1; }

	void setVida_guerra2(int vida) { this->vida_guerra2 = vida; }
	int getVida_guerra2() { return this->vida_guerra2; }

	void setVida_encouracado(int vida) { this->vida_encouracado = vida; }
	int getVida_encouracado() { return this->vida_encouracado; }

	void setVida_submarino(int vida) { this->vida_submarino = vida; }
	int getVida_submarino() { return this->vida_submarino; }
	*/
};

#endif

