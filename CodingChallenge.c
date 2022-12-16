#include <stdio.h>
#include <math.h>
int main()
{
    double line_1;
    double line_2;
    double result;

    printf("Length of the first line: ");
    scanf("%lf", &line_1);
    printf("Length of the second line: ");
    scanf("%lf", &line_2);

    result = sqrt((line_1*line_1) + (line_2*line_2));

    printf("The result is: %f\n", result);
    return 0;
}
