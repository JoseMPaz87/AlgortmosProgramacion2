CC = g++  
CXXARGS  = -g -Wall -O2 -ansi -pedantic
CXXFLAGS = -I. $(CXXARGS)
LDFLAGS  = -g 
OBJS = main.o validacion.o juego.o ahorcado.o

all: tp2 

tp2: $(OBJS)	
	$(CC) $(LDFLAGS) -o tp2 $(OBJS)

main.o: main.cpp validacion.h juego.h idiomas.h
	$(CC) $(CXXFLAGS) -c main.cpp

validacion.o: validacion.cpp validacion.h tipos.h
	$(CC) $(CXXFLAGS) -c validacion.cpp
	
juego.o: juego.cpp juego.h ahorcado.h tipos.h
	$(CC) $(CXXFLAGS) -c juego.cpp
	
ahorcado.o: ahorcado.cpp ahorcado.h tipos.h
	$(CC) $(CXXFLAGS) -c ahorcado.cpp	

clean:
	$(RM) -vf *.o *.exe *.t *.out *.err 
