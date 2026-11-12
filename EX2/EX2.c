#include <stdio.h>

const float PI= 3.14;
void calculate_circle(float radius, float *circumference, float *area)
{
	*circumference = 2*PI*radius;
	*area = PI*radius*radius;
}

int main()
{
	float radius;
	float circumference;
	float area;
	printf("Enter the Radius: ");
	scanf("%f", &radius);
	calculate_circle ( radius,  &circumference, &area);
	printf("Circumference: %.2f\n", circumference);
	printf("Area: %.2f\n", area);

	return 0;
}



