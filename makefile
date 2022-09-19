lab12: arrayProcessing.c lab12.c defs.h
	gcc -Wall -o lab12 arrayProcessing.c lab12.c

run: lab12
	./lab12 11 exercises.txt

clean:
	rm lab12



