gcc = CC
hfile = hello_Ariel.h
OBJ = hello_Ariel.o main1_1.o

all: $(OBJ)
	$(CC) *.o -o main1_1 

main1_1.o: main1_1.c $(hfile)
	$(CC) -c main1_1.c -o $@

hello_Ariel.o: hello_Ariel.c $(hfile)
	$(CC) -c hello_Ariel.c -o $@

clean: 
	rm -f *.o main1_1

.PHONY: all clean

