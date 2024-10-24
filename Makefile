
GCCFlags = -Wall -g


all:	PrettyCMD.o


PrettyCMD.o:	PrettyCMD.c PrettyCMD.h
	gcc ${GCCFlags} -c PrettyCMD.c


clean:
	rm *.o

