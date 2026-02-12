machin.out: main.o Point.o Forme.o Rectangle.o Cercle.o
	g++ -o machin.out main.o Point.o Forme.o Rectangle.o Cercle.o

main.o: main.cpp
	g++ -c main.cpp

Point.o: Point.cpp Point.h
	g++ -c Point.cpp

Forme.o : Forme.cpp Forme.h
	g++ -c Forme.cpp

Rectangle.o : Rectangle.cpp Rectangle.h
	g++ -c Rectangle.cpp

Cercle.o : Cercle.cpp Cercle.h
	g++ -c Cercle.cpp