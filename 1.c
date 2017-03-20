
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0;
	puts("**************************************************");
	puts("\tn\t\toutput");
	puts("**************************************************");
	for(; n < 20; n++)
	{
		printf("\t%i\t\t%i\n", n, n*n*n);
	}
 
	
	return 0;
}
