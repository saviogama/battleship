#include "Menus.h"
#include "Jogador.h"
#include "Navio.h"
#include "Lista.h"
#include <unistd.h>

void menu() {
	//Esse tipo de funcao seria inutil implementar agr devido a interface grafica
}

void iniciarJogo() { //Testes por enquanto

	Navio *navioplayer = new Navio();
	Navio *naviocpu = new Navio();
	Jogador *player = new Jogador("Player", *navioplayer);
	Jogador *bot = new Jogador("BOT", *naviocpu);
	
	bool sucesso = false;
	int linha;
	int coluna;
	char posicao;
	
	//POSICIONAMENTO DOS NAVIOS DO JOGADOR ABAIXO
	
	do { //Enquanto a posicao de escolha do navio nao for valida, o usuario devera continuar informando as entradas
		 //A posicao e verificada pela funcao posicionarNavios
		 //Caso de teste para o posicionamento do navio de 5 casas
		cout << "                                                  B A T A L H A    N A V A L\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "Digite a linha para posicionar o navio porta-avioes (5 casas): 0 a 9\n";
		cin >> linha;
		cout << "Digite a coluna para posicionar o navio porta-avioes (5 casas): 0 a 9\n";
		cin >> coluna;
		cout << "Digite a posicao que deseja: 'v' para vertical ou 'h' para horizontal\n";
		cin >> posicao;
		system("clear");
		sucesso = posicionarNavios(player, 5, linha, coluna, posicao);
	} while (sucesso == false);

	do { //Enquanto a posicao de escolha do navio nao for valida, o usuario devera continuar informando as entradas
		 //A posicao e verificada pela funcao posicionarNavios
		 //Caso de teste para o posicionamento do primeiro navio de 4 casas
		cout << "                                                  B A T A L H A    N A V A L\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "Digite a linha para posicionar o navio de guerra 1 (4 casas): 0 a 9\n";
		cin >> linha;
		cout << "Digite a coluna para posicionar o navio de guerra 1 (4 casas): 0 a 9\n";
		cin >> coluna;
		cout << "Digite a posicao que deseja: 'v' para vertical ou 'h' para horizontal\n";
		cin >> posicao;
		system("clear");
		sucesso = posicionarNavios(player, 6, linha, coluna, posicao);
	} while (sucesso == false);

	do { //Enquanto a posicao de escolha do navio nao for valida, o usuario devera continuar informando as entradas
		 //A posicao e verificada pela funcao posicionarNavios
		 //Caso de teste para o posicionamento do segundo navio de 4 casas
		cout << "                                                  B A T A L H A    N A V A L\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "Digite a linha para posicionar o navio de guerra 2 (4 casas): 0 a 9\n";
		cin >> linha;
		cout << "Digite a coluna para posicionar o navio de guerra 2 (4 casas): 0 a 9\n";
		cin >> coluna;
		cout << "Digite a posicao que deseja: 'v' para vertical ou 'h' para horizontal\n";
		cin >> posicao;
		system("clear");
		sucesso = posicionarNavios(player, 9, linha, coluna, posicao);
	} while (sucesso == false);

	do { //Enquanto a posicao de escolha do navio nao for valida, o usuario devera continuar informando as entradas
		 //A posicao e verificada pela funcao posicionarNavios
		 //Caso de teste para o posicionamento do navio de 3 casas
		cout << "                                                  B A T A L H A    N A V A L\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "Digite a linha para posicionar o navio encouracado (3 casas): 0 a 9\n";
		cin >> linha;
		cout << "Digite a coluna para posicionar o navio encouracado (3 casas): 0 a 9\n";
		cin >> coluna;
		cout << "Digite a posicao que deseja: 'v' para vertical ou 'h' para horizontal\n";
		cin >> posicao;
		system("clear");
		sucesso = posicionarNavios(player, 3, linha, coluna, posicao);
	} while (sucesso == false);

	do { //Enquanto a posicao de escolha do navio nao for valida, o usuario devera continuar informando as entradas
		 //A posicao e verificada pela funcao posicionarNavios
		 //Caso de teste para o posicionamento do submarino de 2 casas
		cout << "                                                  B A T A L H A    N A V A L\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "Digite a linha para posicionar o submarino (2 casas): 0 a 9\n";
		cin >> linha;
		cout << "Digite a coluna para posicionar o submarino (2 casas): 0 a 9\n";
		cin >> coluna;
		cout << "Digite a posicao que deseja: 'v' para vertical ou 'h' para horizontal\n";
		cin >> posicao;
		system("clear");
		sucesso = posicionarNavios(player, 2, linha, coluna, posicao);
	} while (sucesso == false);

	//POSICIONAMENTO DOS NAVIOS DO BOT ABAIXO

	cout << "                                                  B A T A L H A    N A V A L\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "O bot esta posicionando os navios...\n";

	do {
		srand(time(NULL));
		linha = rand() % 10;
		coluna = rand() % 10;
		sucesso = posicionarNavios(bot, 5, linha, coluna, 'v');
	} while (sucesso == false);

	do {
		srand(time(NULL));
		linha = rand() % 10;
		coluna = rand() % 10;
		sucesso = posicionarNavios(bot, 6, linha, coluna, 'v');
	} while (sucesso == false);

	do {
		srand(time(NULL));
		linha = rand() % 10;
		coluna = rand() % 10;
		sucesso = posicionarNavios(bot, 9, linha, coluna, 'h');
	} while (sucesso == false);

	do {
		srand(time(NULL));
		linha = rand() % 10;
		coluna = rand() % 10;
		sucesso = posicionarNavios(bot, 3, linha, coluna, 'v');
	} while (sucesso == false);

	do {
		srand(time(NULL));
		linha = rand() % 10;
		coluna = rand() % 10;
		sucesso = posicionarNavios(bot, 2, linha, coluna, 'h');
	} while (sucesso == false);

	cabeca l;
	cabeca c;

	inicializar(&l);
	inicializar(&c);

	system("clear");

	//ESSE E O INICIO DO JOGO, O LOOP QUE REALIZA TODAS AS JOGADAS ATE QUE HAJA UM VENCEDOR

	while (player->casas_restantes > 0 && bot->casas_restantes > 0) { //O loop so acaba quando alguem destroi todas as casas de navios do adversario

		do { //Vez do jogador, enquanto acertar o navio, ou atirar onde ja foi acertado continua a jogar
			if (player->casas_restantes == 0) {
				break;
			}
			cout << "                                                  B A T A L H A    N A V A L\n";
			cout << "\n";
			cout << "Legenda: \n";
			cout << "5 = Navio porta-avioes\n";
			cout << "6 = Navio de guerra 1\n";
			cout << "9 = Navio de guerra 2\n";
			cout << "3 = Navio encouracado\n";
			cout << "2 = Submarino\n";
			cout << "- = Posicao desconhecida\n";
			cout << "~ = Tiro na agua\n";
			cout << "X = Tiro no navio\n";
			cout << "\n";
			cout << "\n";
			exibirTabuleiro(player, bot);
			cout << "                  Seu Tabuleiro                                                                      Tabuleiro do bot\n";
			cout << "\n";
			cout << "\n";
			cout << "Sua vez de jogar!\n";
			cout << "Digite a linha para atirar: 0 a 9\n";
			cin >> linha;
			cout << "Digite a coluna para atirar: 0 a 9\n";
			cin >> coluna;
			system("clear");
			sucesso = realizarTiro(player, bot, linha, coluna);
		} while (sucesso == true);

		srand(time(NULL));
		do { //Aqui e onde o bot realiza as jogadas
			if (bot->casas_restantes == 0) {
				break;
			}
			linha = rand() % 10;
			coluna = rand() % 10;
			system("clear");
			sucesso = realizarTiroBot(bot, player, linha, coluna, &l, &c);
		} while (sucesso == true);

		cout << "                                                  B A T A L H A    N A V A L\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "Vez do bot realizar a jogada...\n";
		sleep(3);
		system("clear");
	}

	//FIM DO JOGO

	string nome;

	if (player->casas_restantes == 0) {
		nome = "Player";
	}
	else
		nome = "Bot";

	cout << "                                                  B A T A L H A    N A V A L\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "Fim de jogo, o vencedor foi: " << nome << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	exibirTabuleiro(player, bot);

}

