CC = g++   #g++ o clang++
CXXARGS  = -g -Wall 
CXXFLAGS = -I. $(CXXARGS)
LDFLAGS  = -g 
OBJS = main.o arabicos_a_romanos.o 

all: tp1

tp1: $(OBJS)	
	$(CC) $(LDFLAGS) -o tp1 $(OBJS)

main.o: main.cpp arabicos_a_romanos.h
	$(CC) $(CXXFLAGS) -c main.cpp

arabicos_a_romanos.o: arabicos_a_romanos.cpp arabicos_a_romanos.h tipos.h
	$(CC) $(CXXFLAGS) -c arabicos_a_romanos.cpp
	
clean:
	$(RM) -vf *.o *.exe *.t *.out *.err 
