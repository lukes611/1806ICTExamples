
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int N = 12;
	/*

		26[5]45
		26545 / 100
		265.45
		265
		265 % 10
		5

	*/

	
	//int d = N / (int)pow(10.0, 4) % 10;
	//printf("100s column of %i is %i\n", N, d);

	int numDigits = log(N) / log(10) + 1;
	//printf("%i has %i digits\n", N, numDigits);
	
	int i, sum = 0;
	for(i = numDigits-1; i >= 0; i--)
	{
		int d = N / (int)pow(10.0,i) % 10;
		sum += d;
		//printf("%i %i\n", i, d);
		
	}
	printf("sum of digits of %i = %i\n", N, sum);
	
		


	return 0;
}
