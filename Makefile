all:bn

bn:Main.o Jogador.o Lista.o Menus.o Navio.o
	g++ Main.o Jogador.o Lista.o Menus.o Navio.o -o bn

Jogador.o:Jogador.cpp Jogador.h
	g++ Jogador.cpp -c

Lista.o:Lista.cpp Lista.h
	g++ Lista.cpp Lista.h -c

Menus.o:Menus.cpp Menus.h
	g++ Menus.cpp Menus.h -c

Navio.o:Navio.cpp Navio.h
	g++ Navio.cpp Navio.h -c

Main.o: Main.cpp
	g++ -c Main.cpp

clean:
	rm *.o bn *.~
