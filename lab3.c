#include<stdio.h>
#include<math.h>

int main() {
	// initializing variables
	int num;
	FILE *filepntr;
	filepntr = fopen("lab3Output.txt", "w+");
	char cap, low = 'a';
	
	//Getting user inputs
	printf("\nEnter a capital letter: ");
	scanf("%c", &cap);
 

	printf("\nEnter a lowercase letter: ");
	scanf(" %c", &low);

	
	printf("\nEnter an integer (0 - 9): ");
       	scanf("%i", &num);
	
	//Outputs and redirecting outputs to lab3Output.txt
	fprintf(filepntr , "\nThe lower case of %c is: %c\n", cap,  cap+32);
	fprintf(filepntr , "\nThe upper case of %c is: %c\n", low, low-32);
	fprintf(filepntr , "\n%d cubed is  %.0f\n", num,  pow (num,3));

	fprintf(filepntr , "\nThe ASCII values for %d are:\n" ,num);
	fprintf(filepntr , "%-16s %-16s %-16s\n", "DECIMAL", "OCTAL", "HEX");
	fprintf(filepntr , "%-16d %#-16o %#-16X",num+48, num, num );





	}

