#include <stdio.h>
#define PI 3.14

int main() {
	float radius, result;
	int choice;
	
	printf("Enter radius: ");
	scanf("%f", &radius);

	printf("1. Area of Circle\n2. Circumference of Circle\n3. Volume of Sphere\nEnter your choice: ");
	scanf("%d", &choice);
	
	switch (choice) {
	case 1:
		result = PI * radius * radius;
		printf("Area: %.2f sq. unit", result);
		break;
	case 2:
		result = 2 * PI * radius;
		printf("Circumference: %.2f unit", result);
		break;
	case 3:
		result = (4 * PI * radius * radius * radius) / 3;
		printf("Volume of Sphere: %.2f cubic unit", result);
		break;
	default:
		printf("Invalid Option");
	}
	printf("\n");

	return 0;
}
