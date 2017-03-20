#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	srand(time(0));
	int a = rand() % 100;
	int b = rand() % 100;
	int c = rand() % 100;


	printf("a = %i, b = %i, c = %i\n", a, b, c);

	if(a > b && a > c) printf("%i\n", a);
	else if (b > c) printf("%i\n", b);
	else printf("%i\n", c);


	if(a > b && a > c)
	{
		puts("a is largest");
		if(b > c) puts("b is second largest");
		else puts("c is second largest");
	}else if(b > c)
	{
		puts("b is largest");
		if(a > c) puts("a is second largest");
		else puts("c is second largest");
	}else
	{
		puts("c is largest");
		if(a > b) puts("a is second largest");
		else puts("b is second largest");
	}
	

	return 0;
}
