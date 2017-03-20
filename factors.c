
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N = 60;
	int i = 1;
	for(; i <= N; i++)
	{
		if(N % i == 0)
			printf("%i times %i = %i\n", i, N/i, N);
	}


	
	return 0;
}
