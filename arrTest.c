
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printArray(int array[], int L)
{
	int i;
	printf("{");
	for(i = 0; i < L; i++)
	{
		printf("%i", array[i]);
		if(i < L -1) printf(", ");
	}
	printf("}\n");
}

void modify(int x)
{
	x = x + 2000;
}

void modifyArray(int x[], int index)
{
	x[index] = x[index] + 2000;
}



int main()
{
	
	int a[3] = {3,4,6};
	printArray(a, 3);
	modifyArray(a, 1);
	printArray(a, 3);
	
	int b = 3;
	printf("%i\n", b);
	modify(b);
	printf("%i\n", b);
	
	return 0;
}
