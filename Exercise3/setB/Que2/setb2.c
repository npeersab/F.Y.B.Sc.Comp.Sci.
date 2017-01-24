#include <stdio.h>

int main() {
	int choice, length, breadth, result;
	
	printf("1. Area of Square\n2. Area of Rectangle\n3. Area of Triangle\nEnter your choice: ");
	scanf("%d", &choice);

	switch (choice) {
	case 1:
		printf("Enter length: ");
		scanf("%d", &length);

		result = length * length;
		printf("Area of Square: %d", result);
		break;

	case 2:
		printf("Enter length: ");
		scanf("%d", &length);
		printf("Enter breadth: ");
		scanf("%d", &breadth);

		result = length * breadth;
		printf("Area of Rectangle: %d", result);
		break;
	case 3:
		printf("Enter base: ");
		scanf("%d", &length);
		printf("Enter height: ");
		scanf("%d", &breadth);

		result = length * breadth;
		printf("Area of rectangle: %d", result);
		break;
	}

	printf("\n");
	return 0;
}
