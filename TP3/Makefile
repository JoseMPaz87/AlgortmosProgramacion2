CC = g++  
CXXARGS  = -g -Wall -O2 -ansi -pedantic
CXXFLAGS = -I. $(CXXARGS)
LDFLAGS  = -g 
OBJS = main.o lista.o nodo.o figura.o circulo.o rectangulo.o triangulo.o

all: tp3 clean

tp3: $(OBJS)	
	$(CC) $(LDFLAGS) -o tp3 $(OBJS)

main.o: main.cpp lista.h figura.h
	$(CC) $(CXXFLAGS) -c main.cpp

lista.o: lista.cpp lista.h nodo.h
	$(CC) $(CXXFLAGS) -c lista.cpp
	
nodo.o: nodo.cpp nodo.h figura.h circulo.h rectangulo.h triangulo.h
	$(CC) $(CXXFLAGS) -c nodo.cpp	
	
figura.o: figura.cpp figura.h
	$(CC) $(CXXFLAGS) -c figura.cpp	

circulo.o: circulo.cpp circulo.h figura.h
	$(CC) $(CXXFLAGS) -c circulo.cpp	
	
rectangulo.o: rectangulo.cpp rectangulo.h figura.h
	$(CC) $(CXXFLAGS) -c rectangulo.cpp	
	
triangulo.o: triangulo.cpp triangulo.h figura.h
	$(CC) $(CXXFLAGS) -c triangulo.cpp	

clean:
	$(RM) -vf *.o *.exe *.t *.out *.err 
