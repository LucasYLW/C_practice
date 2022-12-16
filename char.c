#include <stdio.h>

int main()
{
	char myChar;
	printf("Enter a character: ");
	scanf("%c", &myChar);
	printf("%i\n", myChar);

	int integer;
	printf("Please enter an integer between 0-127: ");
	scanf("%i", &integer);
	printf("%c\n",integer);	

	char mathz = 'A' + '\t';
	printf("A(%i) + \\t(11) = %c(%d)\n", 'A', mathz, mathz);

	return 0;
}
