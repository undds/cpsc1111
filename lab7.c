//Frank Yang
//CPSC-1111 Spring
//Section 1


#include <stdio.h>

// prototypes
void initArray(int theArray[], int size);
float getAvg(int theArray[], int size);
void printArray(int theArray[], int size);
int findHighest(int theArray[], int size);
int findLowest(int theArray[], int size);
void printLetterGrades(int theArray[], int size);

int main(void) {
	int numGrades;
	float avg;

//	printf("How many grades do you have? ");
	scanf("%i", &numGrades);

	printf("Getting grades...");

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

//Goes through the array and assigns letter grades to each integer value
//At the end, the amount of every letter grade is printed
void printLetterGrades(int theArray[], int size){
	int A = 0, B = 0, C = 0, D = 0, F = 0, a;

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

printf("A's: %i  ", A);
printf("B's: %i  ", B);
printf("C's: %i  ", C);
printf("D's: %i  ", D);
printf("F's: %i", F);
}

//Sorts through the array to find the lowest integer
int findLowest(int theArray[], int size){
	int temp = theArray[0];
	for (int i = 0; i < size; i++){
	if (theArray[i] < theArray[i+1]);
	if (theArray[i] < temp){
	temp = theArray[i];
}

}
	printf("Lowest grade is: %d" , temp);
return 0;	
}


//Sorts through the array to find the largest number
int findHighest(int theArray[], int size){
	int temp;
	for (int i = 0; i < size; i++){
	if (theArray[i] > theArray[i+1]);
	if (theArray[i] > temp){
	temp = theArray[i];
}

}
	printf("Highest grade is: %i" , temp);
return 0;
}

//Obtains the values of the inputs (grades)
void initArray(int theArray[], int size) {
	for (int i = 0; i < size; ++i) {
//		printf("Enter a grade: ");
		scanf("%i", &theArray[i]);
	} 
}

//Obtains the average grade by adding all the individual grades and dividing by the total amount of grades
float getAvg(int theArray[], int size) {
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		sum = sum + theArray[i];	
	} 

	return (sum / (float)size);
}

// prints out the contents of the array

void printArray(int theArray[], int size) {
	for (int i = 0; i < size; ++i){
		printf("%d \n" , theArray[i]);
	}

}
