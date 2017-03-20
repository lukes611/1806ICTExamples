
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N = 13;
	int i;
	int isPrime = 1;
	for(i = 2; i < N; i++)
	{
		if(N % i == 0)
		{
			isPrime = 0;
			break;
		} 
	}

	if(isPrime) printf("%i is prime\n", N);
	else printf("%i is not prime\n", N);

	return 0;
}
