#include "lab8.h"

int main(void) {
	int numGrades;
	float avg;

	scanf("%i", &numGrades);

	int gradesArray[numGrades];
	initArray(gradesArray, numGrades);



	avg = getAvg(gradesArray, numGrades);


	printf("\n");

	printArray(gradesArray, numGrades);
	printf("\n");

	printf("avg is %.2f \n", avg);
	findHighest(gradesArray, numGrades);
	printf("\n");

	findLowest(gradesArray, numGrades);
	printf("\n\n");

	printLetterGrades(gradesArray, numGrades);
	printf("\n");

	return 0;

}
