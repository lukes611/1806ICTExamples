
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int N = 111;
	/*
		1 2 4 8 16
		1*1 + 0*2 + 1*4 + 1*8 = 13
		
	*/
	
	
	int numDigits = log(N) / log(10) + 1;

	int i = 0, j;
	int output = 0;
	for(i = 0, j = 1; i < numDigits; i++, j = j * 2)
	{
		int d = N / (int)pow(10, i) % 10;
		output += d * j;
		//printf("%i, %i\n", d, j);
	}
	
	printf("%i in binary is %i in decimal\n", N, output);
	

	int out2 = 0;

	int N2 = output;
	int Index = 1;

	while(N2 > 0)
	{
		//printf("%i\n", N2 % 2);
		out2 += (N2 % 2) * Index;
		//printf("out2 = %i\n", out2);
		Index *= 10;
		N2 /= 2;
	}
		
	printf("%i in decimal is %i in binary\n", output, out2);

	return 0;
}
