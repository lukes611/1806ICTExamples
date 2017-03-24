
#include <stdio.h>
#include <stdlib.h>

#include <math.h>

//returns 1 if N is perfect, else returns 0
int isPerfect(int N);

//check numbers from from to "to" and print if they are perfect
void checkNumbers(int from, int to);

void checkNumbers(int from, int to)
{
	for(; from <= to; from++)
	{
		if(isPerfect(from))		
			printf("%i is perfect\n", from);
	}
}

int main()
{
	
	checkNumbers(1, 1000);	
	
	return 0;
}



int isPerfect(int N)
{
		
	int i;
	int sum = 0;
	for(i = 1; i < N; i++)
	{
		if(N % i == 0)
		{
			//printf("%i is a factor of %i\n", i, N);
			sum = sum + i;
		}
	}

	//if(sum == N) return 1;
	//return 0;
	return sum == N;
}
