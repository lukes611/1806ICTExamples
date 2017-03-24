
#include <stdio.h>
#include <stdlib.h>

#include <math.h>

int main()
{
	int B = 10010;

	int i = 0;
	int N = log10(B) + 1;

	printf("binary number %i has %i digits\n", B, N);

	int D = 0;

	for(;i < N; i++)
	{
		int d = B / (int)pow(10, i) % 10;
		int f = (int)pow(2, i);
		printf("digit %i is in the %i's column\n", d, f);
		D = D + f * d;
	}
	
	printf("%i in base 2, is %i in base 10\n", B, D);

	return 0;
}
