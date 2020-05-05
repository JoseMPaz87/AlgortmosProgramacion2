CC = g++   #g++ o clang++
CXXARGS  = -g -Wall -O2
CXXFLAGS = -I. $(CXXARGS)
LDFLAGS  = -g 
OBJS = main.o agenda.o

all: libreta_contactos

libreta_contactos: $(OBJS)	
	$(CC) $(LDFLAGS) -o libreta_contactos $(OBJS)

main.o: main.cpp agenda.h 
	$(CC) $(CXXFLAGS) -c main.cpp
	
agenda.o: agenda.cpp agenda.h
	$(CC) $(CXXFLAGS) -c agenda.cpp
	
clean:
	$(RM) -vf *.o *.exe *.t *.out *.err 
