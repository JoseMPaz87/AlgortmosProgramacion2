CC = g++  
CXXARGS  = -g -Wall -O2 -ansi -pedantic
CXXFLAGS = -I. $(CXXARGS)
LDFLAGS  = -g 
OBJS = main.o base.o base2.o derivada.o

all: ejercicio3

ejercicio3: $(OBJS)	
	$(CC) $(LDFLAGS) -o ejercicio3 $(OBJS)

main.o: main.cpp base.h base2.h derivada.h
	$(CC) $(CXXFLAGS) -c main.cpp

base.o: base.cpp base.h
	$(CC) $(CXXFLAGS) -c base.cpp

base2.o: base2.cpp base2.h base.h
	$(CC) $(CXXFLAGS) -c base2.cpp

derivada.o: derivada.cpp derivada.h base2.h 
	$(CC) $(CXXFLAGS) -c derivada.cpp	

clean:
	$(RM) -vf *.o *.exe *.t *.out *.err 
