#include <stdio.h>

int main(){
	
	const double pi = 3.14159;
	double radius;
	double circumference;
	double area;

	printf("\n Enter radius of a circle: ");
	scanf("%lf", &radius);

	circumference = 2 * pi * radius;
	area = pi * radius * radius;

	printf("Circumference: %lf\n", circumference);
	printf("Area of the circle: %lf\n", area);

	return 0;
}
