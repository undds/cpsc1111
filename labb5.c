//Frank Yang
//CPSC-1111 Spring Semster
//Converts inputted binary into decimal number and decimal number into binary
//
#include <stdio.h>
#include <math.h>


int main(void)
{
	int i, bin = 0, n, a[10];


	printf("Enter a binary number (consists of only 1s and 0s): \n");
	scanf("%d", &n);


for (i=0; n!=0; i++)
{
		a[i] = n%10;
		n = n/10;
}
	

	n = i;


	for (i = 0; i < n; i++)
	{
		bin += a[i]*pow(2,i);
	}

	printf("\nThe decimal equivalent of is %d \n" , bin);



	int m, j,  b[10];

	printf("Enter a decimal number: \n");
	scanf("%d", &m);

	for (i = 0; m > 0; i++)
{
	b[i] = m%2;
	m = m/2;
}
	printf("The binary equivalent of %d is: ", m);

	for (j = i - 1; j >= 0; j--)
{
	printf("%d" , b[j]);
}
	printf("\n \n");
	return 0;
}
