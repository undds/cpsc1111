//Frank Yang
//CPSC 1111 Spring
//Section 1




#include "defs.h"
#include <stdlib.h>

int main(int argc, char*argv[]){

	FILE * inFile;

	inFile = fopen(argv[2], "r");

	if (inFile == NULL){
		fprintf(stderr, "file open error. Exiting program\n");
		exit(1);
	}

	int i = 3;
	int arraySize = 0;


	sscanf(argv[1], "%d", &arraySize);

	if (i != argc){
		printf("To run program, type: ./lab12 11 exercises.txt\n");
		exit(1);
	}	
	struct exercise *exerPtr;

	exerPtr = (struct exercise*) malloc(arraySize*sizeof(struct exercise));

	initArray(arraySize, exerPtr, inFile);
	getWorkout(arraySize, exerPtr);
	printArray(arraySize, exerPtr);



	printf("\n");

	free(exerPtr);
	exerPtr = NULL;
return 0;
}

