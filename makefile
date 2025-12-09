main: main.o functii.o alocare.o 
	clang main.o functii.o alocare.o -lm -Wall -o main
main.o: main.c header.h
	clang -c main.c -Wall 
functii.o: functii.c 
	clang -c functii.c  -Wall
alocare.o: alocare.c alocare.h
	clang -c alocare.c -Wall 

.PHONY: clean 

clean: 
	rm -f *.o
	rm main
