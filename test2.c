#include <stdio.h>

int main(void) {
	int array_of_integers[10] = {1,2,3,4,5,6,7,8,9,10};
       	int *ptr_of_array, *ptr_of_first_element;
	int i;

	ptr_of_array = array_of_integers;
	ptr_of_first_element = & array_of_integers[0];

//	for(i = 0; i < 10; i++)
//		array_of_integers[i] = i;


	for(i=0;i<10;i++)
		*(ptr_of_array++) = i;

	for(i = 0; i < 10; i++)
		printf("%d\n", *(ptr_of_first_element + 1));

	return 0;

//	printf("%i", array_of_integers);
//	printf("%i", *array_of_integers);




}
