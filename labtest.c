#include <stdio.h>
#include <math.h>
#include <string.h>

int main(int argc, char*argv[]){
	int arraysize = 0;

	printf("%s\n" , argv[0]);
	
	sscanf(argv[1], "%d", &arraysize);

	printf("%d", arraysize);




}
