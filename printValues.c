#include "lab8.h"


void printLetterGrades (int theArray[], int size){
	int A=0, B=0, C=0, D=0, F=0, a;

	for (int i = 0; i < size; i++){
	a = theArray[i];
	if (a >= 90){
		A++;
	}
	else if (a >= 80){
		B++;
	}
	else if (a >= 70){
		C++;
	}
	else if (a >= 60){
		D++;
	}
	else
		F++;
	}
	printf("A's:  %i  B's: %i  C's: %i  D's: %i  F's: %i", A,B,C,D,F);
}



void printArray(int theArray[], int size){
	for (int i =0; i <size; ++i){
		printf("%d \n", theArray[i]);
	}
}

