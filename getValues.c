#include "lab8.h"

int findLowest(int theArray[], int size){
	int  temp = theArray[0];
	for (int i = 0; i < size; i++){
	if (theArray[i] < theArray[i+1]);
	if (theArray[i] < temp){
		temp = theArray[i];
	}

	}
printf("Lowest grade is: %d", temp);
return temp;

}

int findHighest(int theArray[], int size){
	int temp;
	for (int i = 0; i < size; i++){
	if (theArray[i] > theArray[i+1]);
	if (theArray[i] > temp){	
	temp = theArray[i];
		}
	}
	printf("Highest grade is: %i", temp);
return temp;
}

float getAvg(int theArray[], int size) {
	int sum = 0;
	for(int i = 0; i < size; ++i) {
		sum = sum + theArray[i];
	}
	return (sum / (float)size);
}






