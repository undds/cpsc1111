// Frank Yang 
// 2/10/22
// CPSC-1111


#include<stdio.h>

int main(void) {
	int rows = 1 , count, i, coeff = 1, j, space;	

	//Obtain user input for how many rows
	printf("How many rows for Pascal's triangle? ");
	scanf("%d", &rows);




	//Run the nested loops for the same amount of times as the user input for rows
	for(i = 0; i  < rows; i++ ) 
	{
		// Aligns the triangle
		for(space=1;space<rows-i;space++)
		{
			printf(" ");
		}
	// inserts the first 1 per row
	// yeah its a bit scuffed
	printf("%3i",  coeff);
		
		//This nested loop prints the rest of the  numbers of pascal's trinagle in a row
		for (j = 0; j < i; j++)
		{
			coeff = (coeff * (i-j) / (j+1) );
			printf("%3i",  coeff);      
		}
	printf("\n");

	
	}

	return 0;
}
