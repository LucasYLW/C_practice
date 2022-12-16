#include <stdio.h>

int main()
{
	//int double float
	printf("How many dogs do you have?: ");
	double dogs = 2.5e6;  //hardcoding
	
	scanf("%lf",&dogs);

	printf("%f\n%e\n%g\n", dogs, dogs, dogs);
	
	/*Conversion Characters
	______________________

	%f - Decimal notation
	%e - Scientific notation
	%g - Coputer decides	
		<-4
		> 5
	*/


	//floating point

	//printf("%i %f %f\n ",1,1111.11,1111.11F);

	return 0;
}
