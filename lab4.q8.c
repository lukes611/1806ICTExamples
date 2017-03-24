
#include <stdio.h>
#include <stdlib.h>


//returns 1 if N is prime, else 0
int isPrime(int N)
{
	int i;
	int isPrime = 1;
	for(i = 2; i < N; i++)
		if(N % i == 0) return 0;
	return 1;
}

void printIfSumIsMadeOfPrimes(int N)
{
	int i;
	for(i = 2; i < N; i++)
	{
		if(isPrime(i))
		{
			//i + x = N, where i and x are prime
			//    x = N - i
			int x = N - i;
			if(isPrime(x))
			{
				printf("%i = %i + %i\n", N, i, x);
				return;
			}
		}
	}
	printf("not true for %i\n", N);
}

void test(int from, int to)
{
	int i;
	for(i = from; i <= to; i++)
	{
		if(i % 2 == 0)		
			printIfSumIsMadeOfPrimes(i);
	}
}


int main()
{
	
	test(4, 10);
	puts("***************");
	test(40, 50);


	return 0;
}
