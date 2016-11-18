.SUFFIXES:
.SUFFIXES: .c .cpp .o

CC = g++

OBJS=vehicle.o       \
     truck.o         \
     taxi.o           \
     parking.o    \
     main.o      

hw4: ${OBJS}
	-echo Linking $@
	g++ -g -o $@ ${OBJS}

CXXFLAGS=-g -Wall


${OBJS}: vehicle.h    \
         truck.h      \
         taxi.h  \
         parking.h \
         makefile


clean:
	rm -f *.o hw4 
