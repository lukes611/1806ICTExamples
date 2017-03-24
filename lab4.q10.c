
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Dec2Bin(int D)
{
	int B = 0, i = 0;
	while(D > 0)
	{
		int d = D % 2;
		D /= 2;
		B += pow(10, i) * d;
		i++;
	}
	return B;
}

int main()
{
	
	int test = 569;
	printf("%i in base 2, is %i in base 10\n", test, Dec2Bin(test));

	return 0;
}
