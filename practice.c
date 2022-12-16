#include <stdio.h>

int main()
{
	int radius;
	printf("Please enter a number: ");	
	scanf("%i", &radius);
	
	double area = 3.14 * (radius*radius);
	printf("The area of the circle with %i radius is %f\n:",radius, area);

	return 0;
}
