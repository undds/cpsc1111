#include <stdio.h>
#include <math.h>
#include <string.h>

int main(int argc, char*argv[]){
	int num1 = 5, num2;

	printf("I have %d arguments \n", argc);
	printf("program executable is %s \n", argv[0]);
	
	printf("Hi there %s \n", argv[1]);


	sscanf(argv[2], "%d", &num1);


	sscanf(argv[3], "%d", &num2);

//	printf("%d + %d = %d \n", num1, num2, num1 + num2);

	return 0;
}




