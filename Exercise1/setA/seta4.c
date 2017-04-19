#include <stdio.h>

int main() {
	float a, b;

	printf("Enter inner radius of ring : ");
	scanf("%f", &b);
	printf("Enter outer radius of ring : ");
	scanf("%f", &a);

	printf("\nPerimeter : %.2f\n", 2 * 3.14 * (a + b));
	printf("Area : %.2f\n", 3.14 * (a * a - b * b));

	return 0;
}
