CC=gcc
AR=ar
FLAGS=-Wall -g


all:libMyMath.so libMyMath.a mains maind

mains: main.o libMyMath.a
	$(CC) $(FLAGS) -o mains main.o libMyMath.a 

maind: main.o libMyMath.so
	 $(CC) $(FLAGS)  -o maind main.o ./libMyMath.so

libMyMath.so: basicMath.o power.o
	$(CC) -shared -o libMyMath.so basicMath.o power.o
libMyMath.a: basicMath.o power.o
	$(AR) -rcs libMyMath.a basicMath.o power.o
basicMath.o: basicMath.c myMath.h  
	 $(CC) $(FLAGS) -fPIC -c basicMath.c
power.o: myMath.h power.c
	$(CC) $(FLAGS) -c power.c
main.o: myMath.h main.c
	  $(CC) $(FLAGS) -c main.c

mymaths: libMyMath.a
mymathd: ilbMyMath.so

.PHONY:clean all
clean:
	rm -f *.o *.a *.so mains maind 
