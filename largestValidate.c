#include<stdio.h>
#include <stdlib.h>

//print the message and scan in an int
int getInt ( char * msg )
{
	int returnValue ;

	//ask message
	printf ( "%s" , msg ) ;
	//scan in an int
	int enteredProperly = scanf ( "%i" , & returnValue ) ;
	//if not entered properly then ->
	if ( ! enteredProperly )
	{
		//print friendly error message
		puts ( "You idiot! Its supposed to be an int" ) ;
		
		//kill the program
		exit ( -1 ) ;
	}
	//otherwise return the value
	return returnValue ;
}


int main()
{
	int a,b,c;

		
		
	a = getInt("enter a: ");
	b = getInt("enter b: ");
	c = getInt("enter c: ");
	
	
	if (a > b && a > c)
		printf("%d is the largest.", a);
	else if (b > a && b > c)
		printf("%d is the largest.", b);
	else if (c > a && c > b)
		printf("%d is the largest.", c);
	else if (a == b && b == c)
		printf("They're equal.");
	else 
		printf("No valid numbers were input.");
		
	puts("");
	return 0;
}
