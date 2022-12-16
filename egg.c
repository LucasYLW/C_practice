#include <stdio.h>

//one line comment

/*multiline comments
*/

int main()
{
	printf("The number of eggs for the day: ");

	int eggs;	
	scanf("%i", &eggs);

	double dozen =(double) eggs / 12;

	printf("You have %f dozen eggs.\n", dozen);
	
	return 0;
}
