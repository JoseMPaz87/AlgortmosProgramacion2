CC = g++  
CXXARGS  = -g -Wall -O2 -ansi -pedantic
CXXFLAGS = -I. $(CXXARGS)
LDFLAGS  = -g 
OBJS = main.o base.o derivada.o

all: ejercicio1

ejercicio1: $(OBJS)	
	$(CC) $(LDFLAGS) -o ejercicio1 $(OBJS)

main.o: main.cpp base.h derivada.h
	$(CC) $(CXXFLAGS) -c main.cpp

base.o: base.cpp base.h
	$(CC) $(CXXFLAGS) -c base.cpp
	
derivada.o: derivada.cpp derivada.h base.h 
	$(CC) $(CXXFLAGS) -c derivada.cpp	

clean:
	$(RM) -vf *.o *.exe *.t *.out *.err 
