all: add-nbo

add-nbo: main.o add.o
	g++ -o add-nbo main.o add.o

main.o: add.h main.cpp
	g++ -c -o main.o main.cpp

sum.o: add.h add.cpp
	g++ -c -o add.o add.cpp

clean:
	rm -f add-nbo
	rm -f *.o
