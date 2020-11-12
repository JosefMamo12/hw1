CC=gcc 
FLAGS= -Wall -g
AR= ar
MYMATHO = Power.o basicMath.o

all:mymathd mymaths maind mains
	 
maind: main.o 
	$(CC) $(FLAGS) -o maind  main.o ./libmymath.so
	
mains: main.o mymaths
	$(CC) $(FLAGS) -o mains main.o libmymath.a
			
mymathd: $(MYMATHO)
	$(CC) -shared -o libmymath.so $(MYMATHO)

mymaths: $(MYMATHO)
	$(AR) -rcs -o libmymath.a $(MYMATHO)

main.o: main.c myMath.h 
	$(CC) $(FLAGS) -c main.c

basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c

Power.o: Power.c myMath.h
	$(CC) $(FLAGS) -c Power.c

.PHONY:clean all	

clean:
	-rm *o *a mains maind libmymath.