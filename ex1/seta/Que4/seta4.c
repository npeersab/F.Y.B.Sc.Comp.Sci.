#include <stdio.h>
#define PI 3.14

int main() {

	float a, b;

	printf("Enter inner radius of ring : ");
	scanf("%f", &b);
	printf("Enter outer radius of ring : ");
	scanf("%f", &a);

	printf("\nPerimeter : %.2f\n", 2 * PI * (a + b));
	printf("Area : %.2f\n", PI * (a * a - b * b));

	return 0;
}
