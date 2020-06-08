CC = g++  
CXXARGS  = -g -Wall -O2 -ansi -pedantic
CXXFLAGS = -I. $(CXXARGS)
LDFLAGS  = -g 
OBJS = main.o base.o primera_derivada.o segunda_derivada.o

all: ejercicio4

ejercicio4: $(OBJS)	
	$(CC) $(LDFLAGS) -o ejercicio4 $(OBJS)

main.o: main.cpp base.h primera_derivada.h segunda_derivada.h
	$(CC) $(CXXFLAGS) -c main.cpp

primera_derivada.o: primera_derivada.cpp primera_derivada.h base.h
	$(CC) $(CXXFLAGS) -c primera_derivada.cpp

segunda_derivada.o: segunda_derivada.cpp segunda_derivada.h base.h
	$(CC) $(CXXFLAGS) -c segunda_derivada.cpp

clean:
	$(RM) -vf *.o *.exe *.t *.out *.err 
