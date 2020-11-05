OBJS	= main.o advance.o
SOURCE	= main.c advance.c
HEADER	= advance.h
OUT	= final.out
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.c
	$(CC) $(FLAGS) main.c 

advance.o: advance.c
	$(CC) $(FLAGS) advance.c 


clean:
	rm -f $(OBJS) $(OUT)
