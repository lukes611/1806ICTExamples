
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int N = 121;
	//      6543210
	int numDigits = log(N) / log(10) + 1;
	int i = 0;
	int isPalindrome = 1;
	for(i = 0; i < numDigits / 2; i++)
	{
		int a = i;
		int b = numDigits - 1 - i;
		int d1 = N / (int)pow(10.0, a) % 10;
		int d2 = N / (int)pow(10.0, b) % 10;
		if(d1 != d2){
			isPalindrome=0;
			break;
		} 

	}
	
	if(isPalindrome)
		printf("%i is palindrome\n", N);
	else
		printf("%i is not palindrome\n", N);

	return 0;
}
