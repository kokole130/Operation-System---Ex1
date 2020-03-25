gcc = CC
hfile = hello_Ariel.h


main1_1: hello_Ariel.c main1_1.c $(hfile)
	$(CC) hello_Ariel.c main1_1.c -o main1_1

main1_2: main1_1.c hello_Ariel.so $(hfile)
	$(CC) main1_1.c -L. -l hello_Ariel -o main1_2

main1_3: main1_3.c $(hfile) hello_Ariel.so
	$(CC) main1_3.c -fPIC -ldl -o main1_3

hello_Ariel.so: hello_Ariel.o hello_Ariel.so
	$(CC) -shared hello_Ariel.c -fPIC -o libhello_Ariel.so

clean: 
	rm -f *.o *.so main1_1 main1_2 main1_3

.PHONY: all clean main1_1 main1_2 main1_3

