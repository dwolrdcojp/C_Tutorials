#include <stdio.h>
#include <math.h>

int main()
{	
	double a;
	double b;
	double hypotenuse;

	printf("This program will calculate the hypotenuse of a triangle.\n");

	printf("Please enter the length of the first leg:\n");
	scanf("%lf", &a);

	printf("Please enter the length of the second leg:\n");
	scanf("%lf", &b);

	hypotenuse = sqrt( (a * a) + (b * b));
	printf("The hypotenuse of this triangle is: %f\n", hypotenuse);
	return 0;
}

