
#include <stdio.h>
#include <stdlib.h>

#include <math.h>

int main()
{
	
	int i;
	double D = 1.0;
	double sign = 1.0;

	double ourPi = 0.0;

	for(i = 0;fabs(ourPi-3.14)>0.001;i++, D+=2.0,sign=sign*-1)
	{
		double N = 4.0;
		//printf("%lf * %lf / %lf\n", sign, N, D);
		ourPi += sign * N / D;
		//printf("pi=%lf\n", ourPi);
	}

	printf("it took %i many times to compute 3.14\n", i);

	return 0;
}
