#ifndef defs_h
#define defs_h
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct exercise {
	char name[20];
	char muscles[40];
	int weight;
	int time;
	int sets;
	int reps;
};

int workout;

void initArray(int arraySize, struct exercise * exerPtr, FILE* inFile);
void printArray(int arraySize, struct exercise * exerPtr);
void getWorkout(int arraySize,  struct exercise * exerPtr);


//void initArray(int arraySize, exercise workout[]);
//void printArray(int arraySize, exercise workout[]);
//void getWorkout(int arraySize, exercise workout[]);

#endif
