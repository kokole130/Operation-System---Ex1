gcc = CC
hfile = hello_Ariel.h
OBJ = hello_Ariel.o main1_2.o

all: $(OBJ) hello_Ariel.so
	$(CC) *.o -L. -lhello_Ariel -o main1_2

main1_2.o: main1_2.c hello_Ariel.so
	$(CC) -c -o main1_2.o main1_2.c -I.

hello_Ariel.so: hello_Ariel.o 
	$(CC) -shared hello_Ariel.o -o libhello_Ariel.so

hello_Ariel.o: hello_Ariel.c $(hfile)
	$(CC) -c hello_Ariel.c -o $@

clean: 
	rm -f *.o *.so main1_2

.PHONY: all clean
