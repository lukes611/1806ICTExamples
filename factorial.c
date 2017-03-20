
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int F = 10, n;
	int output = 1;
	//out : 4 * 3 * 2 * 1
	for(n = F; n >= 1; n--)
	{
		output = output * n;

	}
	printf("%i! = %i\n", F, output);
	


	
	return 0;
}
