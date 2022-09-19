#include "defs.h"

void initArray(int arraySize, struct exercise* workout, FILE * inFile){
int i = 0;

//struct exercise* workout;
//get the amount of exercises and set all the intialzing 
	for(i = 0; i < arraySize; i++){
		fscanf(inFile, "%s", workout[i].name);
		fscanf(inFile, "%s", workout[i].muscles);

		workout[i].weight = 0;
		workout[i].time = 0;
		workout[i].sets = 0;
		workout[i].reps = 0;
	}



}

void printArray(int arraySize, struct exercise* workout){
	int i = 0;
	//header
	printf("%-21s %-35s %5s %5s %5s %5s\n", "EXERCISE", "MUSCLES","WEIGHT", "TIME", "SETS", "REPS");
	//all different data points
	for (i = 0; i < arraySize; i++){
		printf("%2d. %-17s %35s %5d %5d %5d %5d\n", i+1, workout[i].name, workout[i].muscles, workout[i].weight,workout[i].time, workout[i].sets, workout[i].reps);
	}
}

void getWorkout(int arraySize, struct exercise* workout){
	int i = 0;
	//reset input back to user
	freopen("/dev/tty","r",stdin);
	//asks for weight time sets and reps for each exercise
	for(i = 0; i < arraySize; i++){
		printf("%s for %s:\n", workout[i].name, workout[i].muscles);
		printf("	Weight: ");
		scanf("%i", &workout[i].weight);

		printf("	Time: ");
		scanf("%i", &workout[i].time);

		printf("	Sets: ");
		scanf("%i", &workout[i].sets);

		printf("	Reps: ");
		scanf("%i", &workout[i].reps);
	}



}

